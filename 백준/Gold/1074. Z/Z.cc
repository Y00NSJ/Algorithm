#include <bits/stdc++.h>
using namespace std;

int zfunc(int n, int r, int c) {
    if (n == 0) return 0;

    int half_edge = 1<<(n-1);
    if (r < half_edge && c < half_edge) return zfunc(n-1, r, c);
    if (r < half_edge && c >= half_edge) return half_edge * half_edge + zfunc(n-1, r, c-half_edge);
    if (r >= half_edge && c < half_edge) return 2 * half_edge * half_edge + zfunc(n-1, r-half_edge, c);
    return 3 * half_edge * half_edge + zfunc(n-1, r-half_edge, c-half_edge);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, r, c;
    cin >> n >> r >> c;
    cout << zfunc(n, r, c);
}