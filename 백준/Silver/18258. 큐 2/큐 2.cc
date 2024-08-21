#include <bits/stdc++.h>
using namespace std;

int q[2000001];
int f, r, n, i;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s == "push")  cin >> q[r++];
        else if (s == "pop") cout << (f == r?  -1 : q[f++]) << '\n';
        else if (s == "size") cout << r - f << '\n';
        else if (s == "empty") cout << (f == r) << '\n';
        else if (s == "front") cout << (f == r? -1 : q[f]) << '\n';
        else cout << (f == r? -1 : q[r - 1]) << '\n';
    }
}