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

	avg /= t; //���
	avg = floor(avg + 0.5);

	sort(arr, arr + t);

	mid = arr[t / 2]; //�߰�
	range = arr[t - 1] - arr[0]; //����

	for (int i = 0; i < t; i++) { //arr2 = �� �� �迭
		arr2[arr[i] + 4000] += 1;
	}

	int max = 0;
	for (int i = 0; i < 8001; i++) { //�� max ã��
		if (max < arr2[i])
			max = arr2[i];
	}

	bool first = true; //�ߺ��̸� �ι�° ���� ģ��
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