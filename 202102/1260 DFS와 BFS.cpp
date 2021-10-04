#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

vector<int> v[1001];
bool visited[1001];
bool visited2[1001];
queue<int> q;

void dfs(int start) {
	visited[start] = true;
	cout << start << ' ';
	for (int i = 0; i < v[start].size(); i++) {
		int node = v[start][i];
		if (!visited[node]) dfs(node);
	}
}

void bfs(int start) {
	visited2[start] = true;
	q.push(start);

	while (!q.empty()) {
		int node = q.front();
		q.pop();
		cout << node << ' ';

		for (int i = 0; i < v[node].size(); i++) {
			int next = v[node][i];
			if (!visited2[next]) {
				visited2[next] = true;
				q.push(next);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m, start;
	int a, b;

	cin >> n >> m >> start;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 0; i < n; i++) {
		sort(v[i].begin(), v[i].end());
	}

	dfs(start);
	cout << "\n";

	bfs(start);
	cout << "\n";
}