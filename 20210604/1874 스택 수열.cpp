#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, input, cur = 1;
	stack<int> s;
	string res;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;

		if (s.empty()) {
			s.push(cur++);
			res += "+";
		}

		while (s.top() != input) {
			if (cur > n) break;

			s.push(cur++);
			res += "+";
		}

		if (s.top() == input) {
			s.pop();
			res += "-";
		}
	}
	
	if (s.empty()) {
		for (int i = 0; i < res.size(); i++) {
			cout << res[i] << "\n";
		}
	}
	else
		cout << "NO";
}