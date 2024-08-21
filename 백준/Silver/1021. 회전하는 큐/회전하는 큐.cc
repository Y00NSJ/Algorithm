#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, ans = 0, temp, k;
    cin >> n >> m;
    deque<int> d;
    for (int i = 0; i < n; i++) d.push_back(i + 1);
    int target[m] = {};
    for(int i = 0; i < m; i++) {
        cin >>  target[i];
    }

    for (int t : target) {
        if (d.front() != t) {
            for (k = 0; d[k] != t; k++) ;
            if (d.size() - k > k) {
                while (d.front() != t) {
                    temp = d.front();
                    d.pop_front();
                    d.push_back(temp);
                    ans++;
                }
            }
            else {
                while (d.front() != t) {
                    temp = d.back();
                    d.pop_back();
                    d.push_front(temp);
                    ans++;
                }
            }
        }
        d.pop_front();
        continue;
    }
    cout << ans << '\n';

}