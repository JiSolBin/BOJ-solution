#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, mid, mod, range, temp = 0;
	double avg = 0;
	int ol = -1; //overlap
	int k = 2;

	cin >> t;

	int* arr = new int[t];
	int arr2[8001] = { 0, };

	for (int i = 0; i < t; i++) {
		cin >> arr[i];
		avg += arr[i];
	}

	avg /= t; //평균
	avg = floor(avg + 0.5);

	sort(arr, arr + t);

	mid = arr[t / 2]; //중간
	range = arr[t - 1] - arr[0]; //범위

	for (int i = 0; i < t; i++) { //arr2 = 빈도 수 배열
		arr2[arr[i] + 4000] += 1;
	}

	int max = 0;
	for (int i = 0; i < 8001; i++) { //빈도 max 찾기
		if (max < arr2[i])
			max = arr2[i];
	}

	bool first = true; //중복이면 두번째 작은 친구
	for (int i = 0; i < 8001; i++) {
		if (max == arr2[i]) {
			mod = i - 4000;
			if (first)
				first = false;
			else
				break;
		}
	}

	cout << avg << "\n" << mid << "\n" << mod << "\n" << range;
}