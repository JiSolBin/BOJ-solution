#include <iostream>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;

	//파스칼의 삼각형 이용
	long long arr[1001][1001];
	for (int i = 1; i <= n; i++) {
		arr[i][0] = arr[i][i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j]) % 10007;
		}
	}

	cout << arr[n][m] << "\n";
}

