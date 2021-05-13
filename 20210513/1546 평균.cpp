#include <iostream>
using namespace std;

int main(void) {
	int n;
	float max = 0, sum = 0;
	float score[1000];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> score[i];

		if (score[i] > max)
			max = score[i];

		sum += score[i];
	}

	cout << (sum / max * 100) / n;
}