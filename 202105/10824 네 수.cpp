#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long ab = 0, cd = 0;
	string b, d;
	cin >> ab >> b >> cd >> d;

	for (int i = 0; i < b.length(); i++) { ab = ab * 10 + b[i] - '0'; }
	for (int i = 0; i < d.length(); i++) { cd = cd * 10 + d[i] - '0'; }

	cout << ab + cd;
}