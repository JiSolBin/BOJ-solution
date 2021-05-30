#include <iostream>
#include <algorithm>
using namespace std;

string str1, str2;
int lcs[1001][1001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> str1 >> str2;

	str1 = '0' + str1;
	str2 = '0' + str2;

	for (int i = 1; i < str2.length(); i++) {
		for (int j = 1; j < str1.length(); j++) {
			if (str2[i] == str1[j])
				lcs[i][j] = lcs[i - 1][j - 1] + 1;
			else
				lcs[i][j] = max(lcs[i][j - 1], lcs[i - 1][j]);
		}
	}

	cout << lcs[str2.length() - 1][str1.length() - 1];
}