#include <iostream>
using namespace std;

int gcd_func(int a, int b) {
	if (b == 0) return a;
	return gcd_func(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, first_ring;
	cin >> n >> first_ring;

	int ring, gcd;
	while (--n) {
		cin >> ring;

		gcd = gcd_func(first_ring, ring);
		cout << first_ring / gcd << '/' << ring / gcd << "\n";
	}
}