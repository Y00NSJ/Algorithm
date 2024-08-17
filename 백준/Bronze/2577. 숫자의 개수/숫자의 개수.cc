#include <bits/stdc++.h>
// #include <string>
using namespace std;

int cnt[10];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int result = 1;
    int nums[3] = {};
    for (int i : nums) {
        cin >> i;
        result *= i;
    }

    string st = to_string(result);
    for (auto c : st) cnt[c - '0']++;

    for (int o : cnt) cout << o << '\n';
}