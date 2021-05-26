#include <iostream>
using namespace std;

struct point { //0 좌표 저장
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

	bool cnt[10] = { 0, }; //지금 좌표가 가질 수 있는 숫자를 판별해주는 배열
	int x = pnt[idx].x, y = pnt[idx].y; //(x,y) = idx번째 0의 좌표
	int result = 0;

	//idx번째 0이 포함된 정사각형에 있는 숫자들 다 true로
	int check_x = x / 3 * 3, check_y = y / 3 * 3;
	for (int i = check_x; i < check_x + 3; i++) {
		for (int j = check_y; j < check_y + 3; j++)
			cnt[sudoku[i][j]] = 1; //true
	}

	//idx번째 0이 포함된 가로세로에 있는 숫자들 다 true
	for (int i = 0; i < 9; i++)
		cnt[sudoku[x][i]] = cnt[sudoku[i][y]] = 1;

	for (int i = 1; i < 10; i++) {
		if (!cnt[i]) {
			sudoku[x][y] = i; // 숫자 저장
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

	if (func(0)) //1을 return 받으면 출력
		output();
}