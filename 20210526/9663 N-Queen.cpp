#include <iostream>
using namespace std;

bool isused1[28];
bool isused2[28];
bool isused3[28];
int n, cnt = 0;

void func(int cur) {
	if (cur == n) {
		cnt++;
		return;
	}
	
	for (int i = 0; i < n; i++) {
		if (isused1[i] || isused2[i + cur] || isused3[cur - i + n - 1])
			continue;
		
		isused1[i] = 1;
		isused2[i + cur] = 1;
		isused3[cur - i + n - 1] = 1;
		func(cur + 1);
		isused1[i] = 0;
		isused2[i + cur] = 0;
		isused3[cur - i + n - 1] = 0;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	func(0);
	cout << cnt;
}