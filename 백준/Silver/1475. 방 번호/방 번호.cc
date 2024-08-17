#include <bits/stdc++.h>
using namespace std;

int cnt[9];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int result = 0;
    string num;
    cin >> num;

    for (char c : num) {
        if (c - '0' == 9 || c - '0' == 6) {
            cnt[6]++;
            // if (cnt[6] > 2 && cnt[6])
        }
        else cnt[c - '0']++;
    }

    cnt[6] = (cnt[6] + 1) / 2;
    for(int i : cnt) {
        if (i > result) result = i;
    }

    cout << result;
}