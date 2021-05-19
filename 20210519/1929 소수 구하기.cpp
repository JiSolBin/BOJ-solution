#include <iostream>
using namespace std;

int arr[1000000] = { 0, };

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n;
	int check = 0;

	cin >> m >> n;

	//시간초과 코드
	//for (int i = 2; i <= n; i++) {
	//	if (arr[i] == true) {
	//		for (int k = i + 1; k <= n; k++) { //i 제외 다른 애들
	//			if (arr[k] == false) //이미 소수X
	//				continue;
	//			if (k % i == 0) //i의 배수
	//				arr[k] = false;
	//		}
	//	}
	//}

	for (int i = 2; i <= n; i++) {
		if (arr[i] == 1)
			continue;
		for (int j = i * 2; j <= n; j += i)
			arr[j] = 1;
	}

	for (m; m <= n; m++) {
		if (m == 1)
			continue;

		if (arr[m] == 0) {
			cout << m << "\n";
		}
	}
}