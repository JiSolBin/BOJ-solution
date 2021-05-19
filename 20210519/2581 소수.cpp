#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n, sum = 0, min = 0, check = 0;

	cin >> m >> n;

	for (int i = m; i <= n; i++) {
		if (i == 1)
			continue;

		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				check++;
				break;
			}
		}

		if (check == 0) {
			sum += i;

			if (min == 0)
				min += i;
		}

		check = 0;
	}

	if (min == 0)
		cout << -1;
	else
		cout << sum << "\n" << min;
}