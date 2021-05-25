#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<pair<int, string>> arr(n); //ù��°�� ���� �ι�°�� ����

	for (int i = 0; i < n; i++) {
		cin >> arr[i].second;
		arr[i].first = arr[i].second.length();
	}

	sort(arr.begin(), arr.end()); //���� ������ �ڵ����� second ����!!

	cout << arr[0].second << "\n";
	for (int j = 1; j < n; j++) {
		if(arr[j].second != arr[j-1].second)
			cout << arr[j].second << "\n";
	}
}