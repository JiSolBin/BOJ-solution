#include <iostream>
using namespace std;

int t, n;
int cnt = 0;

void backtracking(int sum) {
	if (sum >= n) {
		if (sum == n) cnt++;

		return;
	}

	for (int i = 1; i <= 3; i++) {
		backtracking(sum + i);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++) {
		cnt = 0;
		cin >> n;
		backtracking(0);
		cout << cnt << '\n';
	}
}