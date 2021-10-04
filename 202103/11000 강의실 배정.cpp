#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, s, t;
	//vector<pair<int, int>> v;
	priority_queue<int, vector<int>, greater<int>> pq;

	cin >> n;
	pair<int, int>* v = new pair<int, int>[n];
	for (int i = 0; i < n; i++) {
		//cin >> s >> t;
		//v.push_back(pair<int, int>(s, t));
		cin >> v[i].first >> v[i].second;
	}

	//sort(v.begin(), v.end());
	sort(v, v + n);
	pq.push(v[0].second);
	
	int start, end;
	for (int i = 1; i < n; i++) {
		start = v[i].first;
		end = v[i].second;
 
		if (pq.top() > start)
			pq.push(end);
		else {
			pq.pop();
			pq.push(end);
		}
	}

	cout << pq.size();
}