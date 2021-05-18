#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;
	int cnt = 1;

	cin >> a >> b >> c;

	if (b >= c)
		cout << -1;
	else
		cout << a / (c - b) + 1;
}