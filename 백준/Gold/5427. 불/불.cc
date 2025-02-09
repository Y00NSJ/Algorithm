#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int row, column;
        cin >> column >> row;
        char board[row][column];     
        int fvis[row][column];
        int svis[row][column];
        for (int i = 0; i < row; i++) {
            fill(fvis[i], fvis[i] + column, -1);
            fill(svis[i], svis[i] + column, -1);
        }
        queue<pair<int, int>> fq;
        queue<pair<int, int>> sq;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cin >> board[i][j];
                if (board[i][j] == '*') {
                    fvis[i][j] = 0;
                    fq.push({i, j});
                }
                if (board[i][j] == '@') {
                    svis[i][j] = 0;
                    sq.push({i, j});
                }
            }
        }

        bool escape = false;
        while (!fq.empty()) {
            pair<int, int> fcur = fq.front();
            fq.pop();

            for (int dir = 0; dir < 4; dir++) {
                int nx = fcur.first + dx[dir];
                int ny = fcur.second + dy[dir];
                if (nx < 0 || nx >= row || ny < 0 || ny >= column) continue;
                if (fvis[nx][ny] >= 0 || board[nx][ny] == '#') continue;
                fvis[nx][ny] = fvis[fcur.first][fcur.second] + 1;
                fq.push({nx, ny});
            }
        }

        while (!sq.empty() && (!escape)) {
            pair<int, int> scur = sq.front();
            sq.pop();

            for (int dir = 0; dir < 4; dir++) {
                int nx = scur.first + dx[dir];
                int ny = scur.second + dy[dir];
                if (nx < 0 || nx >= row || ny < 0 || ny >= column) {
                    escape = true;
                    cout << svis[scur.first][scur.second] + 1 << '\n';
                    break;
                }
                if (svis[nx][ny] >= 0 ||board[nx][ny] == '#') continue;
                if (fvis[nx][ny] >= 0 && svis[scur.first][scur.second] + 1 >= fvis[nx][ny]) continue;
                svis[nx][ny] = svis[scur.first][scur.second] + 1;
                sq.push({nx, ny});
            }
        }

        if (!escape) cout << "IMPOSSIBLE\n";
    }
}