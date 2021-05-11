#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main(void) {
	int h, m;

	cin >> h >> m;

	if (m - 45 >= 0)
		m -= 45;
	else {
		m = 60 + (m - 45);
		if (h == 0)
			h = 23;
		else
			h -= 1;
	}

	cout << h << " " << m;
}