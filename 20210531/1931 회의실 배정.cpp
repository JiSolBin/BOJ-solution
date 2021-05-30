#include <iostream>
#include <algorithm>
using namespace std;

struct Time {
	long long S;
	long long E;
};

int compare(Time& t1, Time& t2) {
	if (t1.E == t2.E) return t1.S < t2.S;
	else return t1.E < t2.E;
}

struct Time time[100001];

int main(void) {
	int n, answer = 0;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> time[i].S >> time[i].E;
	}

	sort(time, time + n, compare);
	long long start = 0, end = 0;

	for (int i = 0; i < n; i++) {
		if (time[i].S >= end) {
			start = time[i].S;
			end = time[i].E;
			answer++;
		}
		else continue;
	}

	cout << answer;
}