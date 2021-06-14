#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> s;

    for (int i = 1; i < numbers.size(); i++) {
        for (int j = 0; j < i; j++) {
            s.insert(numbers[i] + numbers[j]);
        }
    }

    answer.assign(s.begin(), s.end());
    return answer;
}