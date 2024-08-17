#include <bits/stdc++.h>
using namespace std;

int cnt[26], isin[26];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s, target;
    cin >> n;
    for (int i = 0; i < n; i++) {
        fill(cnt, cnt + 26, 0);
        fill(isin, isin + 26, 0);
        bool isPossible = true;
        
        cin >> s >> target;
        for (char c : s) cnt[c - 'a']++;
        for (char c : target) isin[c - 'a']++;
        
        for (int i = 0; i < 26; i++) {
            if (cnt[i] != isin[i]) {
                isPossible = false;
                break;
            }
        }
        
        if (isPossible) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}