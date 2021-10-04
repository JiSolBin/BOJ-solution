#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, arr[101];

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	int cnt = 0;
	for (int i = n - 1; i > 0; i--) {
		if (arr[i] >= arr[i + 1]) {
			arr[i++]--;
			cnt++;
		}
	}

	cout << cnt;
}