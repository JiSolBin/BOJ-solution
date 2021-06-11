#include <iostream>
#include <vector>
using namespace std;

int white = 0, blue = 0;

int divide(vector<vector<int>>& v, int x, int y, int h) {
	if (h == 1) {
		if (v[x][y] == 1) blue++;
		else white++;
		return v[x][y];
	}

	int num = 0;
	num += divide(v, x, y, h / 2);
	num += divide(v, x + (h / 2), y, h / 2);
	num += divide(v, x, y + (h / 2), h / 2);
	num += divide(v, x + (h / 2), y + (h / 2), h / 2);

	if (num == 4) { //��� �Ķ�
		blue -= 3;
		return 1;
	}

	if (num == 0) { //��� ���
		white -= 3;
		return 0;
	}

	//���̻� ������ �� ������ (��� ~���� �ƴ�)
	return -100;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<vector<int>> v(n, vector<int>(n, 0)); //2���� ����
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}

	divide(v, 0, 0, n);
	cout << white << "\n" << blue;
}