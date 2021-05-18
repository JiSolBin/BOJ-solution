#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int apt[15][15] = { 0 };
	int t, k, n;

	for (int i = 0; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			apt[i][j] = i == 0 ? j : apt[i][j - 1] + apt[i - 1][j];
		}
	}

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		cout << apt[k][n] << "\n" ;
	}
}