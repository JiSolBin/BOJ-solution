//#include <iostream>
//using namespace std;
//
//int main(void) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	//int x[2], y[2];
//	//int temp_x, temp_y;
//	//int i = 2;
//
//	////첫번째 입력
//	//cin >> temp_x >> temp_y;
//	//x[0] = temp_x; y[0] = temp_y;
//	//
//	////두번째, 세번째 입력
//	//while (i--) {
//	//	cin >> temp_x >> temp_y;
//
//	//	x[0] == temp_x ? x[0] = -1 : x[1] = temp_x;
//	//	y[0] == temp_y ? y[0] = -1 : y[1] = temp_y;
//	//}
//
//	//x[0] == -1 ? cout << x[1] << " " : cout << x[0] << " ";
//	//y[0] == -1 ? cout << y[1]: cout << y[0];
//
//	int x, y;
//	int a = 0, b = 0;
//	
//	for (int i = 0; i < 3; i++) {
//		cin >> x >> y;
//		a ^= x; b ^= y;
//	}
//
//	cout << a << ' ' << b;
//}

#include <iostream>
using namespace std;

int func(int a, int b, int c) {
	if (a == b) return c;
	else if (a == c) return b;
	return a;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x1, x2, x3, y1, y2, y3;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	cout << func(x1, x2, x3) << ' ' << func(y1, y2, y3);
}