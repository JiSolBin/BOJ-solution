#include <iostream>
using namespace std;

int n;
unsigned long long arr[1000001] = { 0,1,2 };

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	if (n <= 2)
		cout << arr[n];
	else {
		for (int i = 3; i <= n; i++)
			arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;

		cout << arr[n];
	}
}