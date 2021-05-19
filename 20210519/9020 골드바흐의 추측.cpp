#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n, x, y;
	int check = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		//절반나눈게 소수면 바로 출력
		for (int i = 2; i < (n / 2); i++) {
			if ((n / 2) % i == 0) {
				check++;
				break;
			}
		}

		if (check == 0) {
			cout << (n / 2) << " " << (n / 2) << "\n";
			continue;
		}
		
		check = 0;
		
		//절반 나눈게 소수가 아니라면 -1, +1씩 움직여서 소수인지 확인
		x = (n / 2);
		y = (n / 2);

		while (true) {
			x -= 1;
			y += 1;

			for (int i = 2; i < x; i++) { // x랑 y소수냐
				if (x % i == 0 || y % i == 0) {
					check++;
					break;
				}
			}

			if (check == 0) {
				cout << x << " " << y << "\n";
				break;
			}

			check = 0;
		}
	}
}