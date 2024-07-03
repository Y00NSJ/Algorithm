#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int n, x, k;
	cin >> n >> x;
	while (n--) {
		cin >> k;
		if (x > k)
			cout << k << ' ';
	}
}