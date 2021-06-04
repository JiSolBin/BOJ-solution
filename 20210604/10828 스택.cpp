#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, val;
	stack<int> s;
	string func;

	cin >> n;
	while (n--) {
		cin >> func;
		if (func == "push") {
			cin >> val;
			s.push(val);
		}
		else if (func == "pop") {
			if (s.empty()) {
				cout << -1 << "\n";
				continue;
			}

			cout << s.top() << "\n";
			s.pop();
		}
		else if (func == "size") 
			cout << s.size() << "\n";
		else if (func == "empty") 
			cout << s.empty() << "\n";
		else if (func == "top") {
			if (s.empty())
				cout << -1 << "\n"; 
			else
				cout << s.top() << "\n";
		}
	}
}