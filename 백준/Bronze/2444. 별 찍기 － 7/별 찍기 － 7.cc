#include <iostream>
using namespace std;

int main() {
	int n, i, j;
	cin >> n;
	
	for (i = 1; i < n + 1; i++) {
		// (n - 1) * " ", (2n - 1) * "*"
		for (j = 0; j < n - i; j++)
			cout << " ";
		for (j = 0; j < 2 * i - 1; j++)
			cout << "*";
		cout << "\n";
	}
	for (i = n - 1; i > 0; i--) {
		// (n - 1) * " ", (2n - 1) * "*"
		for (j = 0; j < n - i; j++)
			cout << " ";
		for (j = 0; j < 2 * i - 1; j++)
			cout << "*";
		if (i == 1)
			return 0;
		cout << "\n";
	}
}
