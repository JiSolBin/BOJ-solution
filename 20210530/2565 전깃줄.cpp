#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, dp[501], res = 1;
	int a, b;
	vector<pair<int, int>> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back(pair<int, int>(a, b));
	}
	
	sort(v.begin(), v.end());

	for (int i = 0; i <= n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (v[i].second > v[j].second) {
				dp[i] = max(dp[i], dp[j] + 1);
			}

			if (dp[i] > res) {
				res = dp[i];
			}
		}
	}

	cout << n - res;
}