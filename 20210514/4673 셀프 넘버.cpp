#include <iostream>
using namespace std;

bool arr[10001];

int main(void) {
	int result;

	for (int i = 1; i < 10001; i++) {
		result = i + i % 10 + i % 100 / 10 + i % 1000 / 100 + i % 10000 / 1000 + i / 10000;
		if (result > 10000)
			continue;

		arr[result] = true;
	}

	for (int j = 1; j < 10001; j++) {
		if (arr[j] == false)
			cout << j << endl;
	}
}