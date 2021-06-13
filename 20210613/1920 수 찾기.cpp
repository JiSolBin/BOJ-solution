#include <iostream>
#include <algorithm>
using namespace std;

int func(int* n_seq, int obj, int start, int end) {
	if (start > end) return 0;

	int mid = (end + start) / 2;

	if (n_seq[mid] == obj)	return 1;

	if (n_seq[mid] > obj) {
		return func(n_seq, obj, start, mid - 1);
	}
	else if (n_seq[mid] < obj) {
		return func(n_seq, obj, mid + 1, end);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m, n_val, m_val;
	int n_seq[100000], m_seq[100000];

	cin >> n;
	for (int i = 0; i < n; i++) { cin >> n_seq[i]; }

	sort(n_seq, n_seq + n);

	cin >> m;
	for (int i = 0; i < m; i++) { cin >> m_seq[i]; }

	int start = 0, end = n;

	for (int i = 0; i < m; i++) {
		int check = func(n_seq, m_seq[i], start, end);

		if (check == 1) cout << "1\n";
		else cout << "0\n";
	}
}