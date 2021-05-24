#include <iostream>
using namespace std;

int n;

void solve(int n, int x, int y) {
	if ((x / n) % 3 == 1 && (y / n) % 3 == 1)
		cout << ' ';
	else {
		if (n / 3 == 0)
			cout << "*";
		else
			solve(n / 3, x, y);
	}

	return;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			solve(n, i, j);

		cout << "\n";
	}
}