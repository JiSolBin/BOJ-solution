#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	queue<int> q;
	int k, n;

	cin >> k >> n;

	for (int i = 1; i <= k; i++) { q.push(i); }

	cout << '<';

	while (!q.empty()) {
		int cnt = n - 1;

		while (cnt--) {
			q.push(q.front());
			q.pop();
		}

		cout << q.front();
		q.pop();

		q.empty() ? cout << '>' : cout << ", ";
	}
}