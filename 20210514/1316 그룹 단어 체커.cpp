#include <iostream>
using namespace std;

int main(void) {
	string arr;
	int n, result = 0;
	bool temp = false, fail = false;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> arr;

		for (int j = 0; j < arr.size(); j++) {
			for (int k = j + 1; k < arr.size(); k++) {
				if (arr[j] != arr[k]) { //���ڰ� �ٲ��
					temp = true;
				}
				else {
					if (temp == true) { //���ڰ� �� �� �ٲ���µ� ������ ����
						fail = true; //�׷�ܾ �ƴ�
						break;
					}
				}
			}
			temp = false; //�ʱ�ȭ
			if (fail == true)
				break;
		}

		if (fail == false)
			result++;
		
		fail = false;
	}

	cout << result;
}