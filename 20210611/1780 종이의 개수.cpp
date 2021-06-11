#include <iostream>
#include <vector>
using namespace std;

int n, mone = 0, zero = 0, one = 0;
int temp;

void func(vector<vector<int>>& v, int x, int y, int n) {
	temp = v[x][y];
	bool b = false;

	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (v[i][j] != temp) {
				b = true;
				break;
			}
		}
	}

	if (b == true) {
		func(v, x, y, n / 3);
		func(v, x, y + (n / 3), n / 3);
		func(v, x, y + (n / 3) * 2, n / 3);

		func(v, x + (n / 3), y, n / 3);
		func(v, x + (n / 3), y + (n / 3), n / 3);
		func(v, x + (n / 3), y + (n / 3) * 2, n / 3);

		func(v, x + (n / 3) * 2, y, n / 3);
		func(v, x + (n / 3) * 2, y + (n / 3), n / 3);
		func(v, x + (n / 3) * 2, y + (n / 3) * 2, n / 3);
	}
	else {
		if (temp == -1) mone++;
		else if (temp == 0) zero++;
		else one++;
	}

	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	vector<vector<int>> v(n, vector<int>(n, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}

	func(v, 0, 0, n);
	cout << mone << "\n" << zero << "\n" << one;
}