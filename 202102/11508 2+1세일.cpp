#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, c, res = 0;
	vector<int> v;

	cin >> n;
	v.push_back(100001); //정렬했을 때 제일 앞에 위치

	for (int i = 0; i < n; i++) {
		cin >> c;
		v.push_back(c);
	}

	sort(v.begin(), v.end(), greater<int>());

	for (int i = 1; i < v.size(); i++) {
		if (i % 3 != 0) res += v[i];
	}

	cout << res;
}