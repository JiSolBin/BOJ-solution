#include <iostream>
using namespace std;

int main(void) {
	int test_case;
	float stu_num, cnt = 0, sum = 0;

	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		float arr[1000]; cnt = 0; sum = 0;

		cin >> stu_num;

		for (int j = 0; j < stu_num; j++) {
			cin >> arr[j];
			sum += arr[j];
		}

		for (int k = 0; k < stu_num; k++) {
			if (arr[k] > sum / stu_num) {
				cnt++;
			}
		}

		cout << fixed;
		cout.precision(3);
		cout << cnt / stu_num * 100 << "%" << endl;
	}
}