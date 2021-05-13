#include <iostream>
using namespace std;

int main(void) {
	int a;
	int cnt = 10;
	int arr[10];

	for (int i = 0; i < 10; i++) {
		cin >> a;

		arr[i] = a % 42;
	}

	for (int j = 0; j < 10; j++) {
		if (arr[j] == -1)
			continue;

		for (int k = j + 1; k < 10; k++) {
			if (arr[j] == arr[k]) {
				cnt--;
				arr[k] = -1;
			}
		}
	}

	cout << cnt << endl;
}