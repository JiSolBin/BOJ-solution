#include <iostream>
#include <cmath> //���־󿡼� �̰� ���� ���ư��µ� ���ؿ��� ������ ������ ����
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, x1, y1, r1, x2, y2, r2;
	double d;

	cin >> t;

	while (t--) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		if (x1 == x2 && y1 == y2) {
			if (r1 == r2)
				cout << -1 << "\n";
			else
				cout << 0 << "\n";

			continue;
		}

		d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); //�� ���� �Ÿ�

		if (r1 + r2 < d || d + r1 < r2 || d + r2 < r1)
			cout << 0 << "\n";
		else if (r1 + r2 == d || d + r1 == r2 || d + r2 == r1)
			cout << 1 << "\n";
		else
			cout << 2 << "\n";
	}
}