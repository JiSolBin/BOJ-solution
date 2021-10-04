#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int p[1001];
	int dp[1001] = { 0, };

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> p[i];
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], dp[i - j] + p[j]);
		}
	}

	cout << dp[n];
}