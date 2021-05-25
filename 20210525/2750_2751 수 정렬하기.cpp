#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	int* arr = new int[t];

	for (int i = 0; i < t; i++)
		cin >> arr[i];
	
	sort(arr, arr + t);
	
	for (int j = 0; j < t; j++)
		cout << arr[j] << "\n";
}