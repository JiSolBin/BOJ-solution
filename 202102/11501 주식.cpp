#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, n;
	int arr[1000001] = { 0, };

	cin >> t;
	while (t--) {
		cin >> n;

		for (int i = 0; i < n; i++)
			cin >> arr[i];

        long long res = 0;
        int last = arr[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            if (last > arr[i])
                res += last - arr[i];
            else
                last = arr[i];
        }

		cout << res << '\n';
	}
}