#include <iostream>
using namespace std;

int main(void) {
	int n, result = 0;

	cin >> n;

		for (int i = 1; i <= n; i++) {
			if (i % 10 - ((i / 10) % 10) == ((i / 10) % 10) - (i / 100))
				result++;
		}

	cout << result;
}