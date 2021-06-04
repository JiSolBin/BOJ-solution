#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str;

	while (true) {
 		getline(cin, str);

		if (str[0] == '.') break;

		stack<char> stack;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(' || str[i] == '[')
				stack.push(str[i]);
			else if (str[i] == ')' || str[i] == ']') {
				if (stack.empty()) {
					cout << "no" << "\n";
					break;
				}

				if (str[i] == ')' && stack.top() == '(')
					stack.pop();
				else if (str[i] == ']' && stack.top() == '[')
					stack.pop();
				else {
					cout << "no" << "\n";
					break;
				}
			}

			if (str[i] == '.') {
				if (stack.empty())
					cout << "yes" << "\n";
				else
					cout << "no" << "\n";
			}
		}
	}
}