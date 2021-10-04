#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, s, r;
	vector<int> arr(11, 1);

	cin >> n >> s >> r;
	
	int temp;
	while (s--) {
		cin >> temp;
		arr[temp]--;
	}

	while (r--) {
		cin >> temp;
		arr[temp]++;

		if (arr[temp] == 2 && arr[temp - 1] == 0) arr[temp - 1]++;
		else if (arr[temp] == 2 && arr[temp + 1] == 0) arr[temp + 1]++;
	}

	int res = 0;
	for (int i = 1; i <= n; i++)
		if (arr[i] == 0) res++;
	
	cout << res;
}