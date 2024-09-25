#include <bits/stdc++.h>
using namespace std;

int lst[100001];
int target[100001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> lst[i];
    // 정렬!
    sort(lst, lst + n);
    cin >> m;
    for (int i = 0; i < m; i++) cin >> target[i];

    for (int i = 0; i < m; i++) {
        int start = 0, end = n - 1;
        cout << binary_search(lst, lst+n, target[i]) << '\n';
    }
}