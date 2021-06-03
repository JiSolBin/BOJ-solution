#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t, left, right;
	int res;

	cin >> t;
	while (t--) {
		res = 1;
		cin >> left >> right;
		for (int i = 1; i <= right - left; i++) {
			res *= right - i + 1;
			res /= i;
		}
		cout << res << "\n";
	}

	//M개의 선택지 중 N개를 선택하는 방법은 mCn (M 콤비네이션 N) 즉 M!/N!
	//하지만 M!/N!는 오버플로우 발생
	//right - left 해줌 (M 콤비네이션 N == M콤비네이션 M-N)
}