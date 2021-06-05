#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	queue<int> q;

	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		q.push(i);

	cout << "<";

	int cnt = 0;
	while (!q.empty()) {
		if (++cnt == k) {
			cout << q.front();
			q.pop();
			cnt = 0;

			if (q.empty())
				cout << ">";
			else
				cout << ", ";
		}
		else {
			q.push(q.front());
			q.pop();
		}
	}
}