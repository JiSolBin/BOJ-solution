#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, result = 0, sum = 0, temp;
	cin >> n;

	for (int i = 1; i < n; i++) {
		temp = i;
		do {
			sum += temp % 10;
			temp /= 10;
		} while (temp != 0);
		
		if (n == sum + i) {
			result = i;
			break;
		}

		sum = 0;
	}

	cout << result;
}