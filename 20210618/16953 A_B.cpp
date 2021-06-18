#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a, b, cnt = 1;
	cin >> a >> b;

	while (true) {
		if (a == b) {
			cout << cnt;
			break;
		}

		if (a > b) {
			cout << -1;
			break;
		}

		if (b % 10 == 1) b /= 10;
		else if (b % 2 == 0) b /= 2;
		else {
			cout << -1;
			break;
		}

		cnt++;
	}
}