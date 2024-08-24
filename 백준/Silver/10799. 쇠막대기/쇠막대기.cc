#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<char> st;
    int ans = 0;
    char pre;
    string s;
    cin >> s;
    for (char c : s) {
        if (c == '(') {
            st.push(c);
            pre = c;
        }
        else {
            st.pop();
            if (pre == '(') {
                if (!st.empty()) ans += st.size();
            }
            else { // pre == ')'
                ans++; 
            }
            pre = c;
        }
    }
    cout << ans << '\n';
}