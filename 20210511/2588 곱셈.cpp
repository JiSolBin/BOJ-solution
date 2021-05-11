#include <iostream>
using namespace std;

int main(void) {
	int num1, num2;

	cin >> num1;
	cin >> num2;

	int four = num1 * num2;
	int one = num1 * (num2 % 10);
	num2 /= 10;
	int two = num1 * (num2 % 10);
	num2 /= 10;
	int three = num1 * (num2 % 10);

	cout << one << endl << two << endl << three << endl << four;
}