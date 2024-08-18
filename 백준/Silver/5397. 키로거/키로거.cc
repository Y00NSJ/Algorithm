#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    

    while (tc--) {
        list<char> loger;
        list<char>::iterator t = loger.begin();
        string l;
        cin >> l;

        for(char c : l) {
            if (c == '<') {if (t != loger.begin()) t--;}
            else if (c == '>') {if (t != loger.end()) t++;}
            else if (c == '-') {
                if (t != loger.begin()) {
                    t--;
                    t = loger.erase(t);
                }
            } 
            else {
                loger.insert(t, c);
            }
        }
        for (char c : loger) cout << c;
        cout << '\n';
    }
}