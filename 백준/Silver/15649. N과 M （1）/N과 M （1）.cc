#include <bits/stdc++.h>
using namespace std;

int n, m;
bool isUsed[10];
int seq[10];

void btrack(int currentCnt) {
    if (currentCnt == m) {
        for (int i = 0; i < m; i++)
            cout << seq[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!isUsed[i]) {
            seq[currentCnt] = i;
            isUsed[i] = true;
            btrack(currentCnt+1);
            isUsed[i] = false;
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    btrack(0);
}