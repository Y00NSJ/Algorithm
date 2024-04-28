#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, i, k;
	vector<int> v;
	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	for (i = 0; i < n; i++) {
		
		cout << v[i] << "\n";
	}
}