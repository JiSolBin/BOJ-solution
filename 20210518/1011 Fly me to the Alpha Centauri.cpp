#include <iostream>
using namespace std;

int t, x, y;

void get(int cnt, int i) {
	if (x >= y) // x�� y�� �Ѿ�ٸ� ���� Ƚ���� ����
		cout << cnt << "\n";
	else if (x + i >= y) // x�� �ִ� �Ÿ��� ���� �� ���� y��ǥ �̻��̸� Ƚ�� +1�� ����
		cout << cnt + 1 << "\n";
	else { // x, y �� �� �ִ� �Ÿ��� �̵��ϰ� �������� �Ѿ��
		x += i;
		y -= i;
		get(cnt + 2, i + 1);
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;

	while (t--) {
		cin >> x >> y;
		get(0, 1);
	}
}