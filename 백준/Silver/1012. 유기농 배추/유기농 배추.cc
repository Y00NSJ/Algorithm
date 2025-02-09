#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc, row, column, cabbages;
    cin >> tc;
    while (tc--) {
        cin >> column >> row >> cabbages;
        int board[row][column];
        bool vis[row][column];
        for (int i = 0; i < row; i++) {
            fill(board[i], board[i] + column, 0);
            fill(vis[i], vis[i] + column, 0);
        }
        while (cabbages--) {
            int i, j;
            cin >> i >> j;
            board[j][i] = 1;
        }
        queue<pair<int, int>> Q;
        
        int ans = 0;
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < column; c++) {
                if (board[r][c] == 0 || vis[r][c]) continue;
                ans++;
                Q.push({r, c});
                vis[r][c] = 1;

                while (!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();
                    for (int dir = 0; dir < 4; dir++) {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];

                        if (nx < 0 || nx >= row || ny < 0 || ny >= column) continue;
                        if (board[nx][ny] == 0 || vis[nx][ny]) continue;
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
            }
        }
        cout << ans << '\n';
    }
}