#include <iostream>
using namespace std;

int r, c;
char arr[10000][500];
bool visited[10000][500] = { false, };
int res = 0;
const int dy[] = { -1,0,1 };

bool dfs(int y, int x) {
	visited[y][x] = true;
	if (x == c - 1) {
		res++;
		return true;
	}

	for (int i = 0; i < 3; i++) {
		int nx = x + 1;
		int ny = y + dy[i];

		if (ny < 0 || ny >= r || visited[ny][nx] || arr[ny][nx] == 'x') continue;

		if (dfs(ny, nx)) return true;
	}

	return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < r; i++)
		dfs(i, 0);

	cout << res;
}