#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int cases, i, cmd;
	cin >> cases;

	priority_queue<int, vector<int>, greater<int>> minheap;
	
	for (i = 0; i < cases; i++) {
		cin >> cmd;
		if (cmd)
			minheap.push(cmd);
		else {
			if (minheap.empty())
				cout << "0\n";
			else {
				cout << minheap.top() << "\n";
				minheap.pop();
			}
		}
	}
}