#include <bits/stdc++.h>
using namespace std;

int cnt[26];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string word;
    cin >> word;
    for (auto c : word) 
        cnt[c - 'a']++;
    for (int a : cnt) 
        cout << a << ' ';
}