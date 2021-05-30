#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, arr[1000], sum[1000];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	int res;
	res = sum[0] = arr[0];
	for (int i = 1; i < n; i++) {
		sum[i] = sum[i - 1] + arr[i];
		res += sum[i];
	}

	cout << res;
}