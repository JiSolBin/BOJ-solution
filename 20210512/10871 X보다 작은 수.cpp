#include <iostream>
using namespace std;

int main(void) {
	int n, x, num;

	cin >> n >> x;

	while(n--) {
		cin >> num; //�� ��ģ�� �� �ѹ��� �Է� �����Ѱǵ� ���̷�

		if (num < x) cout << num << " ";
	}
}