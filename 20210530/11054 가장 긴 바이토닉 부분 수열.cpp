#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, input[1001] = { 0, }, arr[1001] = { 0, }, arr2[1001] = { 0, }, res = 0;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> input[i];
		arr[i] = arr2[i] = 1;
	}

	//오르막
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (input[i] > input[j]) {
				arr[i] = max(arr[i], arr[j] + 1);
			}
		}
	}

	//뒤에서 오르막 
	for (int i = n; i >= 1; i--) {
		for (int j = n; j > i; j--) {
			if (input[i] > input[j]) {
				arr2[i] = max(arr2[i], arr2[j] + 1);
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		res = max(res, arr[i] + arr2[i] - 1);
	}

	cout << res;
}