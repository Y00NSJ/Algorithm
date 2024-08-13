#include <bits/stdc++.h>
using namespace std;

int vtx, edg, start;
vector<int> adj[1001];
bool vst[1001];

void dfs(int cur) {
    vst[cur] = true;
    cout << cur << ' ';
    for (auto nxt : adj[cur]) {
        if(vst[nxt])
            continue;
        dfs(nxt);
    }
}

void bfs() {
    queue<int> q;
    q.push(start);
    vst[start] = true;
    while(!q.empty()) {
        int cur = q.front();
        cout << cur << ' ';
        q.pop();
        for(auto nxt : adj[cur]){
            if(vst[nxt]) continue;
            q.push(nxt);
            vst[nxt] = true;
        }  
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> vtx >> edg >> start;

    while(edg --) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= vtx; i++)
        sort(adj[i].begin(), adj[i].end());
    dfs(start);
    cout << '\n';
    fill(vst + 1, vst + vtx + 1, false);
    bfs();
}