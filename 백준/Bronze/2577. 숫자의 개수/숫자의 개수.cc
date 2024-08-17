#include <bits/stdc++.h>
// #include <string>
using namespace std;

int cnt[10];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;

    cin >> a >> b >> c;
    int result = a*b*c;

    while (result > 0) {
        cnt[result % 10]++;
        result /= 10;
    }

    for (int o : cnt) cout << o << '\n';
}