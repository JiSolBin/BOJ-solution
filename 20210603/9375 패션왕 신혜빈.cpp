#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	int n;
	string name, kind;
	map<string, int> m;
	while (t--) {
		cin >> n;
		while (n--) {
			cin >> name >> kind;
			m[kind]++;
		}

		int res = 1;
		//auto�� Ÿ���� �������� �ʾƵ� �Ǵ� �ڷ���
		for (auto i = m.begin(); i != m.end(); i++) {
			res *= i->second + 1; //����� �� ���� ��Ģ
		}

		m.clear();
		cout << res - 1 << "\n";
	}
}