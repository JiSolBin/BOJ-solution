#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	deque<int> q;

	cin >> n;
	for (int i = 1; i <= n; i++)
		q.push_back(i);

	while (q.size() != 1) {
		q.pop_front();
		q.push_back(q.front());
		q.pop_front();
	}

	cout << q[0];
}