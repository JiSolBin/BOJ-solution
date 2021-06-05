#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, input;
	string str;
	deque<int> que;
	cin >> n;

	while (n--) {
		cin >> str;

		if (str == "push") {
			cin >> input;
			que.push_back(input);
		}
		else if (str == "pop") {
			if (que.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << que.front() << "\n";
			que.pop_front();
		}
		else if (str == "size")
			cout << que.size() << "\n";
		else if (str == "empty")
			cout << que.empty() << "\n";
		else if (str == "front") {
			if (que.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << que.front() << "\n";
		}
		else if (str == "back") {
			if (que.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << que.back() << "\n";
		}
	}
}