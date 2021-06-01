#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n, res, temp;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	if (n == 1) {
		res = v[0] * v[0];
	}
	else {
		res = v[0] * v[n - 1];
	}

	cout << res;
}