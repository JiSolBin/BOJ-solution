#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int zero = 0, one = 0;
	string str;

	cin >> str;

	if (str[0] == '0') zero++;
	else one++;

	for (int i = 1; i < str.length(); i++) {
		if (str[i] == str[i - 1]) continue;
		else {
			if (str[i] == '0') zero++;
			else one++;
		}
	}

	cout << min(zero, one);
}