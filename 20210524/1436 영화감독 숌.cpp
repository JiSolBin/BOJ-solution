#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int num = 665, cnt = 0;

	while (cnt != n) {
		int temp = ++num;
		while (temp >= 666) {
			if (temp % 1000 == 666) {
				cnt++;
				break;
			}
			temp /= 10;
		}
	}

	cout << num;
}