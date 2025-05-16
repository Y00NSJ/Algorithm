#include <bits/stdc++.h>
using namespace std;

int n, s, ans;
int seq[20];

void count(int curIdx, int curSum) {
    if (curIdx == n) {
        if (curSum == s)
            ans++;
        return;
    }

    count(curIdx+1, curSum);            // curIdx의 수를 미포함한 부분수열의 합
    count(curIdx+1, curSum+seq[curIdx]);// curIdx의 수를 포함한 부분수열의 합
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> seq[i];

    count(0, 0);
    if (s == 0) ans--; // 원소의 개수가 0인 부분수열은 인정하지 않음
    cout << ans;
}