#include <bits/stdc++.h>
using namespace std;


int jVis[1002][1002];
int fVis[1002][1002];
string maze[1002];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int row, column;
    cin >> row >> column;
    queue<pair<int, int>> jQ;
    queue<pair<int, int>> fQ;
    for (int i = 0; i < row; i++) {
        fill(jVis[i], jVis[i] + column, -1);
        fill(fVis[i], fVis[i] + column, -1);
    }

    for (int i = 0; i < row; i++) {
        cin >> maze[i];
        for (int j = 0; j < column; j++) {
            if (maze[i][j] == 'J') {
                jVis[i][j] = 0;
                jQ.push({i, j});
            }
            else if (maze[i][j] == 'F') {
                fVis[i][j] = 0;
                fQ.push({i, j});
            }
        }
    }

    // 불 먼저 BFS 돌려서 전파 시간 구하기
    while (!fQ.empty()) {
        pair<int, int> cur = fQ.front();
        fQ.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= row || ny < 0 || ny >= column) continue;
            if (fVis[nx][ny] >= 0 || maze[nx][ny] == '#') continue;

            fVis[nx][ny] = fVis[cur.first][cur.second] + 1;
            fQ.push({nx, ny});
        }
    }

    // 사람 BFS 돌려서 이동 시간 구하기: 소요 시간 > 불 붙은 시간 이면 진출 불가
    while (!jQ.empty()) {
        pair<int, int> cur = jQ.front();
        jQ.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= row || ny < 0 || ny >= column) {
                // 범위 외 == 탈출 성공
                cout << jVis[cur.first][cur.second] + 1;
                return 0;
            }
            int time = jVis[cur.first][cur.second] + 1;
            if (jVis[nx][ny] >= 0 || maze[nx][ny] == '#') continue;

            // fVis[nx][ny] != 0 : 불과 지훈이가 분리된 상황을 고려
            // -1이면 -> 무조건 가도 됨
            // >-1이면 -> time 조건에 따라 달라짐
            if (fVis[nx][ny] != -1 && time >= fVis[nx][ny]) continue;
            jVis[nx][ny] = time;
            jQ.push({nx, ny});
        }
    }
    cout << "IMPOSSIBLE";
}