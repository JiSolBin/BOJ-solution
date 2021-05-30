#include <iostream>
#include <cmath>
using namespace std;

long long dist[100000];
long long price[100000];
long long res;
long long now;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n - 1; i++) {cin >> dist[i]; }
	for (int i = 0; i < n; i++) { cin >> price[i]; }

	res = dist[0] * price[0]; //첨엔 무조건 주유
	now = price[0];
	for (int i = 1; i < n - 1; i++) {
		now = min(now, price[i]);
		res += now * dist[i];
	}

	cout << res;
}