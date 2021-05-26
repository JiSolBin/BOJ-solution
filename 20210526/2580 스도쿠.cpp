#include <iostream>
using namespace std;

struct point { //0 ��ǥ ����
	int x, y;
};

int sudoku[9][9], cnt = 0;
point pnt[81];

void input() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> sudoku[i][j];

			if (!sudoku[i][j])
				pnt[cnt++] = { i, j };
		}
	}
}

void output() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++)
			cout << sudoku[i][j] << ' ';
		
		cout << "\n";
	}
}

int func(int idx) {
	if (idx >= cnt)
		return 1;

	bool cnt[10] = { 0, }; //���� ��ǥ�� ���� �� �ִ� ���ڸ� �Ǻ����ִ� �迭
	int x = pnt[idx].x, y = pnt[idx].y; //(x,y) = idx��° 0�� ��ǥ
	int result = 0;

	//idx��° 0�� ���Ե� ���簢���� �ִ� ���ڵ� �� true��
	int check_x = x / 3 * 3, check_y = y / 3 * 3;
	for (int i = check_x; i < check_x + 3; i++) {
		for (int j = check_y; j < check_y + 3; j++)
			cnt[sudoku[i][j]] = 1; //true
	}

	//idx��° 0�� ���Ե� ���μ��ο� �ִ� ���ڵ� �� true
	for (int i = 0; i < 9; i++)
		cnt[sudoku[x][i]] = cnt[sudoku[i][y]] = 1;

	for (int i = 1; i < 10; i++) {
		if (!cnt[i]) {
			sudoku[x][y] = i; // ���� ����
			result = func(idx + 1);

			if (result)
				break;

			sudoku[x][y] = 0;
		}
	}
	return result;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	input();

	if (func(0)) //1�� return ������ ���
		output();
}