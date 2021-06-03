#include <iostream>
#include <algorithm>
using namespace std;

int cnt(int n, int x) {
	int cnt = 0;
	for (long long i = x; n / i >= 1; i *= x)
		cnt += n / i;
	return cnt;
}

int main() {
	int n, m, two, five;

	cin >> n >> m;

	two = cnt(n, 2) - cnt(n - m, 2) - cnt(m, 2);
	five = cnt(n, 5) - cnt(n - m, 5) - cnt(m, 5);

	cout << min(two, five);
}