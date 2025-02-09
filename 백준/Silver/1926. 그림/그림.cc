#include <bits/stdc++.h>
using namespace std;

int paper[502][502];
bool vis[502][502];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int cnt, ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int row, column;
    cin >> row >> column;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            cin >> paper[i][j];
    
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < column; c++) {
            if (paper[r][c] == 0 || vis[r][c]) continue;
            cnt++;
            int area = 0;
            queue<pair<int, int>> Q;
            Q.push({r, c});
            vis[r][c] = 1;

            while (!Q.empty()) {
                pair<int, int> cur = Q.front();
                Q.pop();
                area++;
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];

                    if (nx < 0 || nx >= row || ny < 0 || ny >= column) continue;
                    if (vis[nx][ny] || paper[nx][ny] != 1) continue;
                    vis[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
            ans = max(ans, area);
        }
    }
    cout << cnt << '\n' << ans;
}