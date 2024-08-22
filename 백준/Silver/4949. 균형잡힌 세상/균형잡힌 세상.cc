#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (true) {
        string s;
        stack<char> parentheses;
        getline(cin, s);
        if (s == ".") break;
        else {
            for (char c : s) {
                if (c == '[' || c == '(') parentheses.push(c);
                else if (c == ']' || c == ')') {
                    if (parentheses.empty()) {
                        cout << "no\n";
                        break;
                    }
                    else {
                        if (c == ']') {
                            if (parentheses.top() == '[') parentheses.pop();
                            else {
                                cout << "no\n";
                                break;
                            }
                        }
                        if ( c == ')') {
                            if (parentheses.top() == '(') parentheses.pop();
                            else {
                                cout << "no\n";
                                break;
                            }
                        }
                    }
                }


                else if (c == '.') {
                    if (parentheses.empty()) cout << "yes\n";
                    else cout << "no\n";
                }
                else continue;
            }
        }
    }
}