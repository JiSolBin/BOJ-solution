#include <iostream>
using namespace std;

int n, arr[65][65];

void func(int x, int y, int n) {
	int cnt = 0;

	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (arr[i][j])
				cnt++;
		}
	}

	if (cnt != 0 && cnt != n * n) {
		cout << "(";
	}

	if (cnt == 0) {
		cout << 0;
		return;
	}
	else if (cnt == n * n) {
		cout << 1;
		return;
	}
	else {
		func(x, y, n / 2);
		func(x, y + (n / 2), n / 2);
		func(x + (n / 2), y, n / 2);
		func(x + (n / 2), y + (n / 2), n / 2);
	}

	cout << ")";

	return;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}

	func(0, 0, n);
}