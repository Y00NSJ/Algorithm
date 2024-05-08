#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int cases, i, cmd;
	cin >> cases;

	priority_queue<int> maxheap;

	for (i = 0; i < cases; i++) {
		cin >> cmd;
		if (cmd)
			maxheap.push(cmd);
		else {
			if (maxheap.empty())
				cout << "0\n";
			else {
				cout << maxheap.top() << "\n";
				maxheap.pop();
			}
		}
	}
}