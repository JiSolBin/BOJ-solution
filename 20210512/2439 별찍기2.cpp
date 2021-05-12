#include <iostream>
using namespace std;

int main(void) {
	int val,i,j,k;
	cin >> val;

	for (i = 0; i < val; i++) {
		for (j = 1; j < (val-i); j++)
			cout << " ";
		
		for (k = 0; k < (i + 1); k++)
			cout << "*";

		cout << endl;
	}
}