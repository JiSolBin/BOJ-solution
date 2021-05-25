#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Coord {
public:
	int x;
	int y;

	bool operator <(Coord xy) { //연산자 오버로딩
		if (this->y == xy.y)
			return this->x < xy.x;
		return this->y < xy.y;

		//11650(x기준, x같으면 y기준 오름차순)
		//if (this->x == xy.x)
		//	return this->y < xy.y;
		//return this->x < xy.x;
	}
};

int main() {
	int N, x, y;
	cin >> N;
	Coord* coords = new Coord[N];

	for (int i = 0; i < N; i++) {
		cin >> coords[i].x >> coords[i].y;
	}

	sort(coords, coords + N);

	for (int i = 0; i < N; i++) {
		cout << coords[i].x << " " << coords[i].y << "\n";
	}

	//vector<pair<int, int>> v;
	//while (N--) {
	//	cin >> x >> y;
	//	v.push_back(pair<int, int>(x, y));
	//}

	//sort(v.begin(), v.end());

	//for (int i = 0; i < v.size(); i++) {
	//	cout << v[i].first << ' ' << v[i].second << "\n";
	//}
}