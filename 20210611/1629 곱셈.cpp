#include <iostream>
using namespace std;

//(A+B)%C = ((A%C)+(B+C))%C

long long func(int a, int b, int c) {
	if (b == 0) return 1;

	long long temp = func(a, b / 2, c);
	temp = temp * temp % c;

	if (b % 2 == 0) return temp;
	else return a * temp % c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	cout << func(a, b, c);
}