#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string n;
	cin >> n;
	int len = n.length();

	int* arr = new int[len];

	for (int i = 0; i < len; i++) {
		arr[i] = n[i] - '0'; // '0' �Ǵ� 48�� ���� ���ڰ� ��(�ƽ�Ű�ڵ�)
	}

	sort(arr, arr + len);

	for (int i = len - 1; i >= 0; i--) {
		cout << arr[i];
	}
}