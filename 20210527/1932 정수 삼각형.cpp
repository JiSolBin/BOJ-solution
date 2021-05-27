#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[501][501];
int dp[501][501];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> arr[i][j];
		}
	}

	dp[1][1] = arr[1][1];

	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= i + 1; j++) {
			if (j == 1) { //哭率 场
				dp[i + 1][j] = dp[i][j] + arr[i + 1][1];
			}
			else if (j == i + 1) { //坷弗率 场
				dp[i + 1][j] = dp[i][j - 1] + arr[i + 1][j];
			}
			else {
				dp[i + 1][j] = max(dp[i][j - 1], dp[i][j]) + arr[i + 1][j];
			}
		}
	}

	int result = 0;
	for (int i = 1; i <= n; i++) {
		if (dp[n][i] > result) {
			result = dp[n][i];
		}
	}

	cout << result;
}