#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int gcd_func(int a, int b) {
	if (b == 0) return a;
	return gcd_func(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> m;
		v.push_back(m);
	}

	sort(v.begin(), v.end());

	//차잇값들의 최대공약수 구하기
	int gcd = v[1] - v[0];
	for (int i = 2; i < n; i++) {
		gcd = gcd_func(v[i] - v[i - 1], gcd);
	}

	//약수 모두 구하기
	int i;
	vector<int> res;
	for (i = 2; i < sqrt(gcd); i++) {
		if (gcd % i == 0) {
			res.push_back(i);
			res.push_back(gcd/i);
		}
	}

	if (i * i == gcd) res.push_back(i);
	res.push_back(gcd);

	sort(res.begin(), res.end());
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << ' ';
	}
}