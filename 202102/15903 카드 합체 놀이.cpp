#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	long long res = 0;
	vector<long long> v;

	long long temp;
	cin >> n >> m;
	while (n--) {
		cin >> temp;
		v.push_back(temp);
	}

	while (m--) {
		sort(v.begin(), v.end());
		temp = v[0] + v[1];
		v[0] = v[1] = temp;
	}

	for (int i = 0; i < v.size(); i++) res += v[i];

	cout << res;
}