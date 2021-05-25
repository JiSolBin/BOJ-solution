#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n;
	cin >> t;

	int arr[10001] = { 0, };

	for (int i = 0; i < t; i++) {
		cin >> n;
		arr[n] += 1;
	}

	for (int j = 1; j < 10001; j++) {
		if (arr[j] != 0) {
			for (int k = 0; k < arr[j]; k++)
				cout << j << "\n";
		}
	}
}