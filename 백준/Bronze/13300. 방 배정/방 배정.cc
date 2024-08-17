#include <bits/stdc++.h>
using namespace std;

int rooms[6][2]; // 6개 학년 남 & 여
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, y, ans = 0; // n명, k인 1실, y학년
    cin >> n >> k;
    int s; // 0이면 여자 1이면 남자

    // 한 명당 한 줄로 들어옴 (성별 + 학년)
    for (int i = 0; i < n; i++) {
        cin >> s >> y;
        if (s) rooms[y - 1][1]++;
        else rooms[y - 1][0]++;

    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 2; j++) {
            ans += rooms[i][j] / k;
            if ((rooms[i][j]) % k != 0) ans++;
        }
    }

    cout << ans;
}