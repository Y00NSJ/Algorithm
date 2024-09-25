#include <bits/stdc++.h>
using namespace std;

int cards[500001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, target;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> cards[i];
    sort(cards, cards + n);
    cin >> m;
    while (m--) {
        cin >> target;
        cout << upper_bound(cards, cards + n, target) - lower_bound(cards, cards + n, target) << ' ';
    }
}