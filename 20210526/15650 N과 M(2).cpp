#include <iostream>
using namespace std;

int n, m;
int arr[10];
bool isused[10];

void func(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!isused[i]) {
			if (k != 0 && i < arr[k - 1]) //이 전보다 숫자가 작으면 오름차순 X
				continue;
			arr[k] = i;
			isused[i] = 1;
			func(k + 1);
			isused[i] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	func(0);
}