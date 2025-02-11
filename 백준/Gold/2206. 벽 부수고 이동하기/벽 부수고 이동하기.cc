#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

char board[1002][1002];
int dist[1002][1002][2]; // dist[x][y][0]: 벽을 부수지 않고 도달한 거리, dist[x][y][1]: 벽을 한 번 부수고 도달한 거리
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int row, column;
    cin >> row >> column;

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            cin >> board[i][j];

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            dist[i][j][0] = dist[i][j][1] = -1;

    queue<tuple<int, int, int>> Q;
    Q.push({0, 0, 0});
    dist[0][0][0] = 1;

    while (!Q.empty()) {
        int x, y, broken;
        tie(x, y, broken) = Q.front();
        Q.pop();

        if (x == row - 1 && y == column - 1) {
            cout << dist[x][y][broken];
            return 0;
        }

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || nx >= row || ny < 0 || ny >= column) continue;

            // 이동 가능한 경우 (벽이 아닐 때)
            if (board[nx][ny] == '0' && dist[nx][ny][broken] == -1) {
                dist[nx][ny][broken] = dist[x][y][broken] + 1;
                Q.push({nx, ny, broken});
            }

            // 벽을 부수고 이동하는 경우 (broken == 0인 경우만 가능)
            if (board[nx][ny] == '1' && broken == 0 && dist[nx][ny][1] == -1) {
                dist[nx][ny][1] = dist[x][y][broken] + 1;
                Q.push({nx, ny, 1});
            }
        }
    }

    cout << -1; // 도달할 수 없는 경우
    return 0;
}