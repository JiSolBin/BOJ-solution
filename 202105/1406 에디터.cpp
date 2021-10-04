#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str, inst; //instruction (명령어)
	char sup; //supplement (보충)
	int m;
	stack<char> front_cur, behind_cur; //커서 앞, 커서 뒤

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		front_cur.push(str[i]);
	}

	cin >> m;
	while (m--) {
		cin >> inst;

		if (inst == "L" && !front_cur.empty()) {
			behind_cur.push(front_cur.top());
			front_cur.pop();
		}

		if (inst == "D" && !behind_cur.empty()) {
			front_cur.push(behind_cur.top());
			behind_cur.pop();
		}

		if (inst == "B" && !front_cur.empty()) front_cur.pop();

		if (inst == "P") {
			cin >> sup;
			front_cur.push(sup);
		}
	}
	
	for (int i = front_cur.size(); i > 0; i--) {
		behind_cur.push(front_cur.top());
		front_cur.pop();
	}

	for (int i = behind_cur.size(); i > 0; i--) {
		cout << behind_cur.top();
		behind_cur.pop();
	}
}