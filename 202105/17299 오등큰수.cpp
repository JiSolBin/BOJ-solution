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

	//O(N^2) 풀이법으로 풀면 TLE가 발생
	//스택을 이용하여 역순으로 확인한다
	for (int i = n - 1; i >= 0; i--) {

		//현재 숫자의 빈도보다 스택의 top에 있는 빈도가 작거나 같으면 st.pop
		while (!st.empty() && cnt[arr[i]] >= st.top().first) { st.pop(); }

		//오른쪽에 조건을 마녹하는 숫자가 없으면 -1, 있으면 st.top
		res[i] = st.empty() ? -1 : st.top().second;

		//스택에 수 추가
		st.push({ cnt[arr[i]], arr[i] });
	}

	for (int i = 0; i < n; i++) { cout << res[i] << ' '; }

}