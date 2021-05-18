#include <iostream>
using namespace std;

int t, x, y;

void get(int cnt, int i) {
	if (x >= y) // x가 y를 넘어갔다면 지금 횟수가 정답
		cout << cnt << "\n";
	else if (x + i >= y) // x가 최대 거리로 갔을 때 현재 y좌표 이상이면 횟수 +1이 정답
		cout << cnt + 1 << "\n";
	else { // x, y 둘 다 최대 거리로 이동하고 다음으로 넘어가기
		x += i;
		y -= i;
		get(cnt + 2, i + 1);
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;

	while (t--) {
		cin >> x >> y;
		get(0, 1);
	}
}