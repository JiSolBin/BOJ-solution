#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, w = 0, b = 0, result = 33;
	char color[50][50];

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> color[i][j];
		}
	}

 	for (int r = 0; r < n - 7; r++) {
 		for (int k = 0; k < m - 7; k++) {

			for (int i = r; i < r + 8; i++) { //시작이 W일 때
				for (int j = k; j < k + 8; j++) {
					if (i % 2 == 0) {
						if (j % 2 == 0 && color[i][j] == 'B')
							w++;
						if (j % 2 == 1 && color[i][j] == 'W')
							w++;
					}
					else {
						if (j % 2 == 0 && color[i][j] == 'W')
							w++;
						if (j % 2 == 1 && color[i][j] == 'B')
							w++;
					}
				}
			}

			for (int i = r; i < r + 8; i++) { //시작이 B일 때
				for (int j = k; j < k + 8; j++) {
					if (i % 2 == 0) {
						if (j % 2 == 0 && color[i][j] == 'W')
							b++;
						if (j % 2 == 1 && color[i][j] == 'B')
							b++;
					}
					else {
						if (j % 2 == 0 && color[i][j] == 'B')
							b++;
						if (j % 2 == 1 && color[i][j] == 'W')
							b++;
					}
				}
			}

			if (min(w, b) < result)
				result = min(w, b);

			b = 0; w = 0;
		}
	}

	if (result == 33)
		cout << 0;
	else
		cout << result;
}