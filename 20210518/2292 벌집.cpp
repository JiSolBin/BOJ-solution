#include <iostream>
using namespace std;

int main(void) {
	//int n, first = 8, temp = 11, result = 3;

	//cin >> n;

	//if (n == 1)
	//	result = 1;
	//else if (n <= 7)
	//	result = 2;
	//else {
	//	while (n > first + temp) {
	//		result++;
	//		first += temp + 1;
	//		temp += 6;
	//	}
	//}

	//cout << result;

	int n, i = 1, sum = 1;

	cin >> n;

	if (n == 1) cout << 1;
	else {
		while (true) {
			sum += i * 6;
			if (n <= sum) break;
			i++;
		}
		cout << i + 1;
	}
}