#include <bits/stdc++.h>
using namespace std;

int box[102][102][102];
int vis[102][102][102];
int dx[6] = {0, 0, 1, -1, 0, 0};
int dy[6] = {0, 0, 0, 0, 1, -1};
int dz[6] = {1, -1, 0, 0, 0, 0};
int ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int row, column, height;
    cin >> column >> row >> height;
    queue<tuple<int, int, int>> Q;
    for (int h = 0; h < height; h++) {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cin >> box[h][i][j];
                if (box[h][i][j] == 1) Q.push({h, i, j});
                else if (box[h][i][j] == 0) vis[h][i][j] = -1;
            }
        }
    }

    while (!Q.empty()) {
        auto cur = Q.front();
        Q.pop();
        int curX, curY, curZ;
        tie(curZ, curX, curY) = cur;
        for (int dir = 0; dir < 6; dir++) {
            int nx = curX + dx[dir];
            int ny = curY + dy[dir];
            int nz = curZ + dz[dir];
            if (nx < 0 || nx >= row || ny < 0 || ny >= column || nz < 0 || nz >= height) continue;
            if (vis[nz][nx][ny] >= 0) continue;
            vis[nz][nx][ny] = vis[curZ][curX][curY] + 1;
            Q.push({nz, nx, ny});
        }
    }
    
    for (int h = 0; h < height; h++) {
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < column; c++) {
                if (vis[h][r][c] == -1) {
                    cout << -1;
                    return 0;
                }
                ans = max(ans, vis[h][r][c]);
            }
        }
    }
    cout << ans;
}