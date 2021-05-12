#include <iostream>
using namespace std;

int main(void) {
	int n, x, num;

	cin >> n >> x;

	while(n--) {
		cin >> num; //이 미친넘 왜 한번에 입력 가능한건데 뭐이래

		if (num < x) cout << num << " ";
	}
}