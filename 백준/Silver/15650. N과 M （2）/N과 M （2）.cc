#include <bits/stdc++.h>
using namespace std;

int n, m;
int seq[8];
bool isUsed[8];

void nm(int curIdx) {
    if (curIdx == m) {
        for (int i = 0; i < m; i++) cout << seq[i] << ' ';
        cout << '\n';
        return;
    }
    
    int i = (curIdx == 0)? 1 : seq[curIdx-1]+1;
    for (i; i <= n; i++) {
            seq[curIdx] = i;
            nm(curIdx+1);
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    nm(0);
}