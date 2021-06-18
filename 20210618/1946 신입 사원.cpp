#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, n;
	int doc, inter; //interview
	vector<pair<int,int>> rank;
	
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> doc >> inter;
			rank.push_back({doc, inter});
		}

		sort(rank.begin(), rank.end());

		int cnt = 1, curDoc = rank[0].first, curInter = rank[0].second;
		for (int i = 1; i < n; i++) {
			if (rank[i].first < curDoc || rank[i].second < curInter) {
				cnt++;
				curDoc = rank[i].first;
				curInter = rank[i].second;
			}
		}

		cout << cnt << "\n";

		rank.clear();
	}
}