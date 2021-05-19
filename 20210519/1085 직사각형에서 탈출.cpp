#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y, w, h;
	//int res_x, res_y;
	
	cin >> x >> y >> w >> h;

	//w - x > x - 0 ? res_x = x - 0 : res_x = w - x;
	//h - y > y - 0 ? res_y = y - 0 : res_y = h - y;

	//res_x > res_y ? cout << res_y : cout << res_x;

	cout << min({ x, y, w - x, h - y });
}