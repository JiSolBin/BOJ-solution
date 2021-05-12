#include <iostream>
using namespace std;

int main(void) {
	int n, val, temp;
	int cnt = 0;

	cin >> n;
	temp = n;

	while (true) {
		cnt++;

		val = temp / 10 + temp % 10;
		temp = (temp % 10) * 10 + (val % 10);

		if (n == temp)
			break;
	}

	cout << cnt;
}