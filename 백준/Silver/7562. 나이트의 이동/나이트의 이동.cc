#include <bits/stdc++.h>
using namespace std;

int dx[8] = {1, 2, -1, -2, 1, 2, -1, -2};
int dy[8] = {2, 1, -2, -1, -2, -1, 2, 1};
queue<pair<int, int>> q;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc, size;
    cin >> tc;
    while (tc--) {
        cin >> size;
        int board[size][size];
        int vis[size][size];
        for (int i = 0; i < size; i++) {
            fill(board[i], board[i] + size, 0);
            fill(vis[i], vis[i] + size, -1);
        }
        int r, c;
        cin >> r >> c;
        board[r][c] = 1;
        vis[r][c] = 0;
        q.push({r, c});
        cin >> r >> c;
        board[r][c] = 1;
        while (!q.empty()) {
            pair<int, int> cur = q.front();
            q.pop();
            
            for (int dir = 0; dir < 8; dir++) {
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];

                if (nx < 0 || nx >= size || ny < 0 || ny >= size) continue;
                if (vis[nx][ny] >= 0) continue;

                vis[nx][ny] = vis[cur.first][cur.second] + 1;
                //cout << "add: " << nx << ' ' << ny << ' ' << vis[nx][ny] << '\n';
                q.push({nx, ny});
            }
        }
        
        cout << vis[r][c] << '\n';
    }

}