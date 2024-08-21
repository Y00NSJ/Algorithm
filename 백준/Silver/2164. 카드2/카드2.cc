#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, temp;
    queue<int> c;

    cin >> n;
    for (int i = 1; i < n + 1; i++) c.push(i);
    while (c.size() != 1) {
        c.pop();
        temp = c.front();
        c.pop();
        c.push(temp);
    }
    cout << c.front() << '\n';
}