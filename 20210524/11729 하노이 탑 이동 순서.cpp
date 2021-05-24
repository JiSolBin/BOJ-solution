#include <iostream>
using namespace std;

void move(int n, int from, int to) {
	int middle = 6 - from - to;

	if (n == 1) {
		cout << from << ' ' << to << "\n";
		return;
	}
	else if (n >= 2) {
		move(n - 1, from, middle); //���� �ѵ��� from�� to ���� �����
		move(1, from, to); //���� ����
		move(n - 1, middle, to);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k;

	cin >> k;
	//�̵� Ƚ�� 2^k-1 (= 1<<k)
	cout << (1 << k) - 1 << "\n";
	move(k, 1, 3);
}