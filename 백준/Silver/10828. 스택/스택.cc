#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;
    int n, num;
    cin >> n;

    while (n--) {
        string c;
        cin >> c;
        if (c == "push") {
            cin >> num;
            s.push(num);
            }
        else if (c == "pop") {
            if (!s.empty()) {
                cout << s.top() << '\n';
                s.pop();

            }
            else cout << "-1" << '\n';
        }
        else if (c == "size") cout << s.size() << '\n';
        else if (c == "empty") cout << s.empty() << '\n';
        else { // "top"
            if (!s.empty()) cout << s.top() << '\n';
            else cout << "-1" << '\n';
        }
    }
}