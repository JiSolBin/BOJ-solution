#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, l;
	int arr[1001];

	cin >> n >> l;
	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	int res = 1, start = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] - start >= l) {
			res++;
			start = arr[i];
		}
	}

	cout << res;
}