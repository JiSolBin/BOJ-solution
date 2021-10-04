#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m, res = 0;
	char ele; //element
	bool a[50][50], b[50][50], check[50][50] = { 0, };

	cin >> n >> m;

	//a
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> ele;
			a[i][j] = (ele == '1');
		}
	}

	//b
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> ele;
			b[i][j] = (ele == '1');
		}
	}

	//check
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != b[i][j]) check[i][j] = 1;
		}
	}

	if (n < 3 || m < 3) { //n이나 m이 3 미만
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (check[i][j] == 1) {
					res = -1;
					break;
				}
			}
		}
	}
	else {
		//뒤집기
		int i, j;
		for (i = 0; i <= n - 3; i++) {
			for (j = 0; j <= m - 3; j++) {
				if (check[i][j] == 1) {
					res++;
					for (int k = i; k <= i + 2; k++) {
						check[k][j] = !check[k][j];
						check[k][j+1] = !check[k][j+1];
						check[k][j+2] = !check[k][j+2];
					}
				}
			}

			//i행 가장 끝, 끝에서 두번째 수가 true면 무조건 -1
			if (check[i][j - 1] == 1 || check[i][j - 2] == 1) {
				res = -1;
				break;
			}
		}

		//true인 요소가 있는지
		for (i = 0; i < n; i++) {
			if (res == -1) break;
			for (j = 0; j < m; j++) {
				if (check[i][j] == 1) {
					res = -1;
					break;
				}
			}
		}
	}

	cout << res;
}