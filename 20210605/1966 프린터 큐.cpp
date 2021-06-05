#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, n, m, impor; //importance
	queue<pair<int, int>> q;
	priority_queue<int> pq; //큐 안의 원소를 내림차순으로 정렬

	cin >> t;

	int cnt;
	while (t--) {
		cin >> n >> m;
		
		for (int i = 0; i < n; i++) {
			cin >> impor;
			q.push(make_pair(impor, i));
			pq.push(impor);
		}

		cnt = 0;
		while (true) {
			if (q.front().first != pq.top()) {
				q.push(q.front());
				q.pop();
			}
			else {
				cnt++;

				if (q.front().second == m) {
					cout << cnt << "\n";
					break;
				}

				q.pop();
				pq.pop();
			}
		}

		while (!pq.empty()) {
			pq.pop();
			q.pop();
		}
	}
}