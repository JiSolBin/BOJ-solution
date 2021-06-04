#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	vector<int> res(1000001, -1), v(1000001);
	stack<int> s;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> v[i];

	for (int i = n - 1; i >= 0; i--) {
		//top이 v[i]보다 작으면 pop -> top은 v[i]보다 큰 가장 왼쪽 수가 됨
		while (!s.empty() && s.top() <= v[i])
			s.pop();

		if (!s.empty())
			res[i] = s.top();

		s.push(v[i]);
	}

	for (int i = 0; i < n; i++)
		cout << res[i] << "\n";
}