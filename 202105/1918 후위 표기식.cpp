#include <iostream>
#include <stack>
using namespace std;

stack<char> st;

void print() { 
	while (!st.empty() && st.top() != '(') {
		cout << st.top();
		st.pop();
	}

	if(!st.empty()) st.pop(); // ( pop
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			cout << str[i];
			continue;
		}

		if (str[i] == '(') st.push('(');

		if (str[i] == ')') print();

		if (str[i] == '*' || str[i] == '/') {
			while (!st.empty() && (st.top() == '*' || st.top() == '/')) {
				cout << st.top();
				st.pop();
			}

			st.push(str[i]);
		}

		if (str[i] == '+' || str[i] == '-') {
			while (!st.empty() && st.top() != '(') {
				cout << st.top();
				st.pop();
			}

			st.push(str[i]);
		}
	}

	print();
}