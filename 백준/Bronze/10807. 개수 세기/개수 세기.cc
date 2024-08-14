#include <iostream>
using namespace std;

int main() {
	int c, i, t, a;
	int arr[100];
	cin >> c;
	

	for (i = 0; i < c; i++) {
		cin >> arr[i];
	}

	a = 0;
	cin >> t;
	for (i = 0; i < c; i++) {
		if (t == arr[i])
			a++;
	}
	cout << a;
}
