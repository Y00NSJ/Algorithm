#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int H, W, N;
        cin >> H >> W >> N;

        int floor = (N % H == 0) ? H : N % H;
        int room = (N - 1) / H + 1;

        cout << floor;
        if (room < 10) cout << "0";
        cout << room << '\n';
    }
}