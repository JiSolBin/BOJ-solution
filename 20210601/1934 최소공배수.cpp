#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main(void) {
	int t, n, m;

	cin >> t;

	while (t--) {
		cin >> n >> m;
		cout << n * m / gcd(n, m) << "\n";
	}
}