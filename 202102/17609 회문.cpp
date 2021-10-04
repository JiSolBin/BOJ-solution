#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	string str;

	cin >> t;
	while (t--) {
		cin >> str;

		int res = 0;
		for (int i = 0, j = str.size() - 1; i < j; i++, j--) {
			if (str[i] == str[j]) continue;

			//����ȸ���� ���ɼ��� ������
			if (str[i] != str[j - 1] && str[i + 1] != str[j]) {
				res = 2;
				break;
			}

			bool isPalindrome = false;
			for (int k = 0; k <= 1 && isPalindrome == false; k++) {
				int start = i, end = j;
				k == 0 ? start++ : end--; //�ϳ��� �����ư��� �Űܺ���

				isPalindrome = true;
				for (int a = start, b = end; a < b; a++, b--) {
					if (str[a] != str[b]) {
						isPalindrome = false;
						break;
					}
				}
			}

			res = isPalindrome ? 1 : 2;
			break;
		}

		cout << res << "\n";
	}
}