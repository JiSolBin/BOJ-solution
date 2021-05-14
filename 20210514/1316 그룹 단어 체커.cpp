#include <iostream>
using namespace std;

int main(void) {
	string arr;
	int n, result = 0;
	bool temp = false, fail = false;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> arr;

		for (int j = 0; j < arr.size(); j++) {
			for (int k = j + 1; k < arr.size(); k++) {
				if (arr[j] != arr[k]) { //문자가 바뀌면
					temp = true;
				}
				else {
					if (temp == true) { //문자가 한 번 바뀌었는데 같은게 나옴
						fail = true; //그룹단어가 아님
						break;
					}
				}
			}
			temp = false; //초기화
			if (fail == true)
				break;
		}

		if (fail == false)
			result++;
		
		fail = false;
	}

	cout << result;
}