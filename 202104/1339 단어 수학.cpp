#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int res = 0;
vector<string> v;
int alpha[26];

void func() {
	for (int i = 0; i < v.size(); i++) {
		int temp = 1;
		for (int j = v[i].size() - 1; j >= 0; j--) {
			int val = v[i][j] - 'A';
			alpha[val] += temp;
			temp *= 10;
		}
	}

	sort(alpha, alpha + 26);
	int num = 9;
	for (int i = 25; i >= 0; i--) {
		if (alpha[i] == 0) break;
		res += alpha[i] * num--;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	string str;

	cin >> n;
	while (n--) {
		cin >> str;
		v.push_back(str);
	}

	func();
	cout << res;
}