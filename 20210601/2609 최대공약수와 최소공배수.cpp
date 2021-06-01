#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main(void) {
	int n, m;
	cin >> n >> m;
	cout << gcd(n, m) << " " << n * m / gcd(n, m);
}