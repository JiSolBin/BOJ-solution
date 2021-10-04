#include <iostream>
using namespace std;

int n;
long long f[90];

int main() {

	cin >> n;

	f[0] = 0;
	f[1] = 1;

	for (int i = 2; i <= n; i++)
		f[i] = f[i - 1] + f[i - 2];
	
	cout << f[n];
}