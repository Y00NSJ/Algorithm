// https://www.acmicpc.net/problem/7576
#include <bits/stdc++.h>
using namespace std;

int vis[1002][1002];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int row, column;
    cin >> column >> row;
    int box[row][column];
    queue<pair<int, int>> Q;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> box[i][j];
            if (box[i][j] == 1) Q.push({i, j});
            if (box[i][j] == 0) vis[i][j] = -1;
        }
    }

    while (!Q.empty()) {
        pair<int, int> cur = Q.front();
        Q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= row || ny < 0 || ny >= column) continue;
            if (vis[nx][ny] >= 0) continue;
            vis[nx][ny] = vis[cur.first][cur.second] + 1;
            Q.push({nx, ny});
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (vis[i][j] == -1) {
                cout << -1;
                return 0;
            }
            ans = max(vis[i][j], ans);
        }
    }
    cout << ans;
}