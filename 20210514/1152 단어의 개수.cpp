#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	int cnt = 0;

	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {
		if (str[i] != ' ' && (str[i + 1] == ' ' || i == str.size() - 1)) {
			cnt++;
		}
	}

	cout << cnt;
}