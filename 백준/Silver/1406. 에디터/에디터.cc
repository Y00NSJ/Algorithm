#include <bits/stdc++.h>
using namespace std;

list<char> editor;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    char command, word;
    int m;
    cin >> s >> m;
    for (char c : s) editor.push_back(c);
    list<char>::iterator t = editor.end();

    for(int i = 0; i < m; i++) {
        cin >> command;
        if (command == 'L') {
            if (t == editor.begin()) continue;
            t--;
        }
        else if (command == 'D') {
            if (t == editor.end()) continue;
            t++;
        }
        else if (command == 'B') {
            if (t == editor.begin()) continue;
            t--;
            t = editor.erase(t);
        }
        else {
            cin >> word;
            editor.insert(t, word);
        }
    }
    
    for(char c : editor) cout << c;
}