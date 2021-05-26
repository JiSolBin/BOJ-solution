#include <iostream>
using namespace std;

int n, arr[20][20];
int team1[10], team2[10];
int pick[20], result = 0x7fffffff;

void update() {
	int team1_size = 0, team2_size = 0;

	for (int i = 0; i < n; i++) {
		if (pick[i] == 0)
			team1[team1_size++] = i;
		else
			team2[team2_size++] = i;
	}

	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n / 2; i++) {
		for (int j = i + 1; j < n / 2; j++) {
			sum1 += arr[team1[i]][team1[j]] + arr[team1[j]][team1[i]];
			sum2 += arr[team2[i]][team2[j]] + arr[team2[j]][team2[i]];
		}
	}

	if (result > abs(sum1 - sum2))
		result = abs(sum1 - sum2);
}

void dfs(int cur, int pick_cnt) {
	if (pick_cnt == (n / 2)) {
		update();
		return;
	}

	for (int i = cur; i < n; i++) { //ÆÀ »Ì±â
		pick[i] = 1;
		dfs(i + 1, pick_cnt + 1);
		pick[i] = 0;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	}

	dfs(0, 0);

	cout << result;
}