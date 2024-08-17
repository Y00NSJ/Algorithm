#include <bits/stdc++.h>
using namespace std;

int cnt[9];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num, result = 0;
    cin >> num;

    while (num) {
        if (num % 10 == 9 || num % 10 == 6) {
            cnt[6]++;
            // if (cnt[6] > 2 && cnt[6])
        }
        else cnt[num % 10]++;
        num /= 10;
    }

    cnt[6] = (cnt[6] + 1) / 2;
    for(int i : cnt) {
        result = max(result, i);
    }

    cout << result;
}