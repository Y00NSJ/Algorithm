#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string word;
    int cnt[26] = {0, };
    

    cin >> word;
    for (int i = 0; i < word.size(); i++) {
        cnt[word[i] - 'a']++;
    }
    for (int a : cnt) cout << a << ' ';
}