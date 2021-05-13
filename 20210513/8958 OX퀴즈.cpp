#include <iostream>
using namespace std;

int main(void) {
	int n, sum = 0, cnt = 1;
	string str;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;

		for (int j = 0; j < str.length(); j++) {
			if (str[j] == 'O') {
				sum += cnt;
				cnt++;
			}
			else
				cnt = 1;
		}

		cout << sum << endl;
		sum = 0; cnt = 1;
	}
}