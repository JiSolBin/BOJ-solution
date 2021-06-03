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
		//auto는 타입을 지정하지 않아도 되는 자료형
		for (auto i = m.begin(); i != m.end(); i++) {
			res *= i->second + 1; //경우의 수 곱의 법칙
		}

		m.clear();
		cout << res - 1 << "\n";
	}
}