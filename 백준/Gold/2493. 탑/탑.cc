#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> heights(n);
    vector<int> ans(n);
    stack<int> s; // 인덱스를 저장하는 스택
    int idx = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    
    for (int i = 0; i < n; i++) {
        while (!s.empty() && heights[s.top()] <= heights[i]) {
            s.pop();
        }
        if (!s.empty()) {
            ans[i] = s.top() + 1; // 1-based index
        } else {
            ans[i] = 0;
        }
        s.push(i); // 현재 탑의 인덱스를 스택에 저장
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
    
    return 0;
}
