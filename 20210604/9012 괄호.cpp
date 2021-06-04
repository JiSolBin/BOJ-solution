#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string ps;

	cin >> n;
	while (n--) {
		cin >> ps;

		stack<char> s;
		for (int i = 0; i < ps.size(); i++) {
			if (ps[i] == '(')
				s.push('(');
			else {
				if (s.empty()) {
					s.push('x'); //임의로 넣어서 NO 출력 유도
					break;
				}
				else
					s.pop();
			}
		}

		if (!s.empty())
			cout << "NO" << "\n";
		else
			cout << "YES" << "\n";
	}
}