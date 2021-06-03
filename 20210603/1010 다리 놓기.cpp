#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t, left, right;
	int res;

	cin >> t;
	while (t--) {
		res = 1;
		cin >> left >> right;
		for (int i = 1; i <= right - left; i++) {
			res *= right - i + 1;
			res /= i;
		}
		cout << res << "\n";
	}

	//M���� ������ �� N���� �����ϴ� ����� mCn (M �޺���̼� N) �� M!/N!
	//������ M!/N!�� �����÷ο� �߻�
	//right - left ���� (M �޺���̼� N == M�޺���̼� M-N)
}