#include <iostream>
using namespace std;

int n, m;
int arr[10];

void func(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << "\n";
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (k != 0 && i < arr[k - 1])
			continue;
		arr[k] = i;
		func(k + 1);
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	func(0);
}