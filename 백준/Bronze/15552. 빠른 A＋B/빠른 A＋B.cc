#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int c = 0;
	cin >> c;

	int a, b, i;
	for (i = 0; i < c; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
}