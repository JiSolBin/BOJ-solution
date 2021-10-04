#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int l, p, v;
	int cnt = 1;

	while (true) {
		cin >> l >> p >> v;

		if (l == 0 && p == 0 && v == 0) break;

		cout << "Case " << cnt++ << ": " << (v / p) * l + (v % p > l ? l : v % p) << "\n";
	}
}