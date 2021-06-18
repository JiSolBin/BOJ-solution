#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, w, res = 0;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> w;
		v.push_back(w);
	}

	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < n; i++) {
		res = max(res, v[i] * (i + 1));
	}
	
	cout << res;
}