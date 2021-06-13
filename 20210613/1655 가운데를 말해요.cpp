#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	priority_queue<int, vector<int>, less<int>> maxHeap;
	priority_queue<int, vector<int>, greater<int>> minHeap;

	int n, x;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		
		if (i % 2 == 0) maxHeap.push(x);
		else minHeap.push(x);

		if (!maxHeap.empty() && !minHeap.empty()) {
			if (maxHeap.top() > minHeap.top()) {
				maxHeap.push(minHeap.top());
				minHeap.push(maxHeap.top());
				minHeap.pop();
				maxHeap.pop();
			}
		}

		cout << maxHeap.top() << "\n";
	}
}