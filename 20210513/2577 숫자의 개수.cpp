#include <iostream>
using namespace std;

int main(void) {
	int a, b, c, multi;
	int arr[10] = { 0, };

	cin >> a >> b >> c;

	multi = a * b * c;

	while (true) {
		arr[multi % 10] += 1;
		multi /= 10;

		if (multi == 0)
			break;
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;
}