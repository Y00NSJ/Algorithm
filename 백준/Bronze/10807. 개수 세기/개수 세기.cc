#include <iostream>
using namespace std;

int main() {
	int c;
	cin >> c;
	int arr[100];

	int i;
	for (i = 0; i < c; i++) {
		cin >> arr[i];
	}

	int t, a;
	a = 0;
	cin >> t;
	for (i = 0; i < c; i++) {
		if (t == arr[i])
			a++;
	}
	cout << a;
}
