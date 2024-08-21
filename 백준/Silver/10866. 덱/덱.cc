#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    deque<int> d;
    int n, i;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s == "push_front") {
            cin >> i;
            d.push_front(i);
        }
        else if (s == "push_back") {
            cin >> i;
            d.push_back(i);
        }
        else if (s == "pop_front") {
            if(d.empty()) cout << -1 << '\n';
            else{
                cout << d.front() << '\n';
                d.pop_front();
            }
        }
        else if (s == "pop_back") {
            if(d.empty()) cout << -1 << '\n';
            else{
                cout << d.back() << '\n';
                d.pop_back();
      }
        }
        else if (s == "size") cout << d.size() << '\n';
        else if (s == "empty") cout << d.empty() << '\n';
        else if (s == "front") {
        if(d.empty()) cout << -1 << '\n';
        else cout << d.front() << '\n';
        }
        else { // back
        if(d.empty()) cout << -1 << '\n';
        else cout << d.back() << '\n';
        }
    }
}