#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long arr[101] = { 0, 1, 1, 1, };
	for (int i = 3; i <= 100; i++) {
		arr[i] = arr[i - 3] + arr[i - 2];
	}

	int t, n;
	cin >> t;

	while (t--) {
		cin >> n;
		
		if(n<=3)
			cout << 1 << "\n";
		else
			cout << arr[n] << "\n";
	}
}