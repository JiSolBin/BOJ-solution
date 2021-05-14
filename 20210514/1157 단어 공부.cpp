#include <iostream>
using namespace std;

int main(void) {
	string word;
	int alpha[26] = { 0 };
	char result;
	int max = 0;

	cin >> word;
	
	for (int i = 0; i < word.size(); i++)
		word[i] = toupper(word[i]);
	
	for (int j = 0; j < word.size(); j++)
		alpha[(int)word[j] - 65] += 1;

	for (int j = 0; j < 26; j++) {
		if (alpha[j] == max) {
			result = '?';
		}
		else if (alpha[j] > max) {
			max = alpha[j];
			result = (char)(j + 65);
		}
	}

	cout << result;
}