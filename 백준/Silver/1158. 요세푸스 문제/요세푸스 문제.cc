#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    list<int> ys;
    for (int i = 1; i < n + 1; i++) {
        ys.push_back(i);
    }
    auto p = ys.begin();
    while (*p != k) {
        p++;
    }
    
    cout << '<';
    while (n--) {
        cout << *p;
        p = ys.erase(p);
        if (!ys.empty()) {
            cout << ", ";
            if (p == ys.end()) p = ys.begin();
            for (int i = 0; i < k - 1; i++) {
                p++;
                if (p == ys.end()) p = ys.begin();
            }
        }
    }
    cout << '>';
}