#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, val, res = 0;
	deque<int> q;
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		q.push_back(i);
	}

	int idx;
	while (m--) {
		cin >> val;

		//위치찾기
		for (int i = 0; i < n; i++) {
			if (q[i] == val) {
				idx = i;
				break;
			}
		}

		if (idx <= q.size() / 2) {
			while (q.front() != val) {
				q.push_back(q.front());
				q.pop_front();
				res++;
			}
		}
		else {
			while (q.front() != val) {
				q.push_front(q.back());
				q.pop_back();
				res++;
			}
		}

		q.pop_front();
	}

	cout << res;
}