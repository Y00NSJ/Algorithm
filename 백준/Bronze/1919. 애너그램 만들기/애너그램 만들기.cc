#include <bits/stdc++.h>
using namespace std;

int cnt[26], target[26];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ans = 0;
    string a, b;
    cin >> a >> b;

    for (char c : a) cnt[c - 'a']++;
    for (char c : b) target[c - 'a']++;
    
    for (int i = 0; i < 26; i++) {
        cnt[i] -= target[i];
        if (cnt[i] < 0) cnt[i] *= -1;
        ans += cnt[i];
    }
    cout << ans;
}