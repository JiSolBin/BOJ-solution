#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, temp;
	priority_queue<int, vector<int>, greater<int>> pq;

	cin >> n;
	while(n--) {
		cin >> temp;
		pq.push(temp);
	}

	int res = 0;
	int a, b;
	while (pq.size() != 1) {
		a = pq.top();
		pq.pop();
		b = pq.top();
		pq.pop();
		res += a + b;
		pq.push(a + b);
	}

	cout << res;
}