#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	priority_queue<int> pq; //top¿¡ ÃÖ´ñ°ª

	int n, val;

	cin >> n;
	while (n--) {
		cin >> val;

		if (val == 0) {
			if (pq.empty()) {
				cout << "0\n";
				continue;
			}

			cout << pq.top() << "\n";
			pq.pop();
		}
		else
			pq.push(val);
	}
}