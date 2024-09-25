#include <bits/stdc++.h>
using namespace std;

int lst[100001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, target;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> lst[i];
    // 정렬!
    sort(lst, lst + n);
    cin >> m;
    while (m--) {
        cin >> target;
        cout << binary_search(lst, lst + n, target) << '\n';
    }
}