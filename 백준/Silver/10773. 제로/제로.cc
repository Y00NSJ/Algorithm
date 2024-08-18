#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;
    int k, num, sum = 0;
    cin >> k;

    while (k--) {
        cin >> num;
        if (num == 0) {
            if (!s.empty()) {
                sum -= s.top();
                s.pop();
            }
        }
        else {
            s.push(num);
            sum += s.top();
        }
    }
    cout << sum << '\n';
}