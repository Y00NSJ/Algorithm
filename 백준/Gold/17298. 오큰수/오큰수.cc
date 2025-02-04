#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int series[n], ans[n];
    fill(ans, ans + n, -1);
    for (int i = 0; i < n; i++) {
        cin >> series[i];
    }

    stack<int> nge;
    for (int i = 0; i < n - 1; i++) {
        nge.push(i);
        while (!nge.empty() && series[nge.top()] < series[i + 1]) {
            ans[nge.top()] = series[i + 1];
            nge.pop();
        }
    }

    for (int i : ans) {
        cout << i << " ";
    }
}