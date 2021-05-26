#include <iostream>
using namespace std;

int t, n[11], oper[4] = { 0, };
int min_num = 1000000000, max_num = -1000000000;

void func(int idx, int num) {
	if (idx == t) {
		if (num > max_num) max_num = num;
		if (num < min_num) min_num = num;
	}
	else {
		if (oper[0]) {
			oper[0]--;
			func(idx + 1, num + n[idx]);
			oper[0]++;
		}
		if (oper[1]) {
			oper[1]--;
			func(idx + 1, num - n[idx]);
			oper[1]++;
		}
		if (oper[2]) {
			oper[2]--;
			func(idx + 1, num * n[idx]);
			oper[2]++;
		}
		if (oper[3]) {
			oper[3]--;
			func(idx + 1, num / n[idx]);
			oper[3]++;
		}
	}

}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;

	for (int i = 0; i < t; i++)
		cin >> n[i];

	for (int i = 0; i < 4; i++)
		cin >> oper[i];

	func(1, n[0]);

	cout << max_num << "\n" << min_num;
}