#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, arr[100001];
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int dp[100001], ans;
	dp[0] = arr[0];

	for (int i = 1; i <= n; i++) {
		if (arr[i] + dp[i - 1] >= arr[i])
			dp[i] = arr[i] + dp[i - 1];
		else
			dp[i] = arr[i];
	}

	ans = dp[0];
	for (int i = 0; i < n; i++) {
		ans = max(ans, dp[i]);
	}

	cout << ans;
}