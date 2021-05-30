#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int w[101], v[101];
int dp[101][100001];
int ans = 0;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> w[i] >> v[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (w[i] <= j)
				dp[i][j] = max(dp[i - 1][j], v[i] + dp[i - 1][j - w[i]]);
			else
				dp[i][j] = dp[i - 1][j];

			ans = max(ans, dp[i][j]);
		}
	}

	cout << ans;
}