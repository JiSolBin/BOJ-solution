#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	string str;
	double arr[26];
	stack<double> st;

	cin >> n >> str;

	for (int i = 0; i < n; i++) cin >> arr[i];

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			st.push(arr[str[i] - 'A']);
			continue;
		}
		
		//두 번째 피연산자가 더 먼저 나온 숫자
		double b = st.top();
		st.pop();
		double a = st.top();
		st.pop();

		switch (str[i]) {
		case '+':
			st.push(a + b);
			break;
		case '-':
			st.push(a - b);
			break;
		case '*':
			st.push(a * b);
			break;
		case '/':
			st.push(a / b);
			break;
		default:
			break;
		}
	}

	cout << fixed;
	cout.precision(2);
	cout << st.top();
}