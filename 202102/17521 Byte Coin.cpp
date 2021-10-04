#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long n, w, arr[20];

	cin >> n >> w;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	long long stock;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] < arr[i + 1]) {
			stock = w / arr[i];
			w %= arr[i];
			w += stock * arr[i + 1];
		}
	}

	cout << w;
}