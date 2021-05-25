#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	if (a.first != b.first)
		return a.first < b.first;
	else
		return false; //암것도 안하면 들어온 순서대로
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<pair<int, string>> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i].first;
		cin >> arr[i].second;
	}

	stable_sort(arr.begin(), arr.end(), compare); //stable_sort = 고정된 위치 보장(먼저온 놈이 먼저 위치)

	for (int i = 0; i < n; i++) {
		cout << arr[i].first << " " << arr[i].second << "\n";
	}
}