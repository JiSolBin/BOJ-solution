#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, h, w, n;
	int room = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		
		if (n % h == 0) {
			room = h * 100;
			room += n / h;
		}
		else {
			room = (n % h) * 100;
			room += n / h + 1;
		}

		cout << room << "\n";
	}
}