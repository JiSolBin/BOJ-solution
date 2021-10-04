#include <iostream>
#include <stack>
using namespace std;

int n;
int arr[1000001];
int res[1000001];
int cnt[1000001] = { 0, };
stack<pair<int, int>> st;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		cnt[arr[i]]++;
	}

	//O(N^2) Ǯ�̹����� Ǯ�� TLE�� �߻�
	//������ �̿��Ͽ� �������� Ȯ���Ѵ�
	for (int i = n - 1; i >= 0; i--) {

		//���� ������ �󵵺��� ������ top�� �ִ� �󵵰� �۰ų� ������ st.pop
		while (!st.empty() && cnt[arr[i]] >= st.top().first) { st.pop(); }

		//�����ʿ� ������ �����ϴ� ���ڰ� ������ -1, ������ st.top
		res[i] = st.empty() ? -1 : st.top().second;

		//���ÿ� �� �߰�
		st.push({ cnt[arr[i]], arr[i] });
	}

	for (int i = 0; i < n; i++) { cout << res[i] << ' '; }

}