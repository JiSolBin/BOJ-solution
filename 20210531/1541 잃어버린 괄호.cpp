#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str, temp;
	int res = 0;
	bool mi = false;

	cin >> str;

	for (int i = 0; i <= str.size(); i++) {
		if (str[i] == '+' || str[i] == '-' || str[i] == '\0') {
			if (mi == true) { res -= stoi(temp); }
			else { res += stoi(temp); }

			if (str[i] == '-') { mi = true; }

			temp.clear();
			continue;
		}

		temp += str[i];
	}

	cout << res;
}