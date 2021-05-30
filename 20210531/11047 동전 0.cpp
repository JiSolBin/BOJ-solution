#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	int arr[11];
	
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	int temp, res = 0;
	temp = k;
	for (int i = n; i > 0; i--) {
		res += temp / arr[i];
		temp %= arr[i];
	}

	cout << res;
}