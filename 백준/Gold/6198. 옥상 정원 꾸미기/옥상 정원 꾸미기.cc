#include <bits/stdc++.h>
using namespace std;

long long sum;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> S;
    int n;
    cin >> n;
    vector<int> heights(n);
    
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    for (int i = 0; i < n; i++) {
        while (!S.empty() && heights[S.top()] <= heights[i]) {
            S.pop();
        }
        sum += S.size();
        S.push(i);
    }

    cout << sum;
}