#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;
    string ans;
    int n, num;
    cin >> n;
    int sq[n] = {};

    for (int i = 0; i < n; i++) {
        cin >> num;
        sq[i] = num;
    }

    int j = 1;
    for (int i = 0; i < n; i++) {
        if (s.empty() || s.top() < sq[i]) {
            for(j; j <= sq[i]; j++) {
                ans += "+\n";
                s.push(j);
            }
        }
        if (s.top() == sq[i]) {
            ans += "-\n";
            s.pop();
            continue;
        }
        if (s.top() > sq[i]) {
            cout << "NO\n";
            break;
        }
    }
    if (s.empty()) cout << ans;
}