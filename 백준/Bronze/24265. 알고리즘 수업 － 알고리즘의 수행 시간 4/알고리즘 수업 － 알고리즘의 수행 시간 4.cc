#include <iostream>
using namespace std;

int main() {
	long n;
	cin >> n;

	/* a[], n
	for (i = 1; i < n; i++) {
		for (j = i + 1; j < n + 1) {
			sum += a[i] * a[j]
		}
	}
	return sum;
	O(  )
	코드 1의 수행 횟수는 n(n-1)/2
	*/
	cout << n * (n - 1) / 2 << "\n" << 2 << "\n";
}