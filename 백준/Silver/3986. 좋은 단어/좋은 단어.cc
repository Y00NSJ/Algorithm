#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, ans = 0;
    string s;
    cin >> n;

    while (n--) {
        cin >> s;
        stack<char> stack;
        for (char c : s) {
            if (!stack.empty() && c == stack.top()) stack.pop();
            else stack.push(c);
            }

        if (stack.empty()) ans++;
    }
    cout << ans << '\n';
}