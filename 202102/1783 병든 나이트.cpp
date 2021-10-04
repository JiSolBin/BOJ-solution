#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;

	cin >> n >> m;
	if (n == 1) cout << "1\n";
	else if (n == 2) cout << min(4, (m - 1) / 2 + 1) << "\n";
	else {
		if (m >= 7) cout << m - 2 << "\n";
		else cout << min(4, m) << "\n";
	}
}