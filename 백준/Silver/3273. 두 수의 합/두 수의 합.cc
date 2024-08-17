#include<bits/stdc++.h>
using namespace std;

int sq[1000001] = {};
bool check[2000001];

int main(void) {
    ios:: sync_with_stdio(0);
    cin.tie(0);

    int n, x, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> sq[i];
    cin >> x;
    
    for (int i = 0; i < n; i++) {
        if (x - sq[i] > 0 && check[x - sq[i]]) ans++;
        check[sq[i]] = true;
    }

    cout << ans;
}