// https://www.acmicpc.net/problem/2178
#include <bits/stdc++.h>
using namespace std;


int vis[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int row, column;
    cin >> row >> column;
    string maze[row];
    for (int i = 0; i < row; i++) cin >> maze[i];

    queue<pair<int, int>> Q;
    vis[0][0] = 1;
    Q.push({0, 0});

    while (!Q.empty()) {
        pair<int, int> cur = Q.front();
        Q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= row || ny < 0 || ny >= column) continue;
            if (vis[nx][ny] || maze[nx][ny] != '1') continue;

            vis[nx][ny] = vis[cur.first][cur.second] + 1;
            Q.push({nx, ny});
        }
    }
    cout << vis[row - 1][column - 1];
}