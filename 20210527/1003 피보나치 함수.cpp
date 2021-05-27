#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, n;
	long long f[41];

	cin >> t;

	//피보나치 수열 구해놓기
	f[0] = 0;
	f[1] = 1;

	for (int i = 2; i <= 40; i++)
		f[i] = f[i - 1] + f[i - 2];

	while (t--) {
		cin >> n;

		if(n==0)
			cout << 1 << ' ' << 0 << "\n";
		else
			cout << f[n - 1] << ' ' << f[n] << "\n";
	}
}