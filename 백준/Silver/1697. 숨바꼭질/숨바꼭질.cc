#include <bits/stdc++.h>
using namespace std;

int vis[100002];
char dx[3] = {'b', 'g', 's'};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(vis, vis + 100001, -1);
    int n, k;
    cin >> n >> k;
    queue<int> Q;
    Q.push(n);
    vis[n] = 0;

    while (vis[k] == -1) {
        int cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 3; dir++) {
            int nx;
            if (dir == 0) nx = cur - 1;
            if (dir == 1) nx = cur + 1;
            if (dir == 2) nx = cur * 2;

            if (nx < 0 || nx > 100000) continue;
            if (vis[nx] >= 0) continue;
            vis[nx] = vis[cur] + 1;
            Q.push(nx);
        }
    }
    cout << vis[k];
}