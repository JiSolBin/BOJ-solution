#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, input[1001] = { 0, }, arr[1001] = { 0, }, res = 1;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> input[i];
		arr[i] = 1;

		for (int j = 1; j < i; j++) {
			if (input[i] > input[j]) {
				arr[i] = max(arr[i], arr[j] + 1);
			}

			if (arr[i] > res) {
				res = arr[i];
			}
		}
	}

	cout << res;
}