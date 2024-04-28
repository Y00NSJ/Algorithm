#include <iostream>
#include <string>
using namespace std;

int main() {
	int c, l, i, j, k;
	string s;
	cin >> c;

	for (i = 0; i < c; i++) {
		cin >> l >> s;
		
		for (j = 0; j < s.length(); j++) {
			for (k = 0; k < l; k++) {
				cout << s[j];
			}
		}
		cout << "\n";
	}
}