#include <iostream>
using namespace std;

int factorial(int k) {
	if (k == 0) return 1;
	if (k == 1) return 1;
	return k * factorial(k - 1);
}

int main(void) {
	int n, m;
	cin >> n >> m;

	//이항계수 (n k) = n! / k! * (n - k)!
	cout << factorial(n) / (factorial(m) * factorial(n - m)) << "\n";
}