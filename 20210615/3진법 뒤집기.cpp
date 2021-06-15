#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;

    while (n / 3 != 0) {
        v.push_back(n % 3);
        n = n / 3;
    }
    v.push_back(n);

    int temp = 1;
    for (int i = v.size() - 1; i >= 0; i--, temp *= 3) {
        answer += v[i] * temp;
    }

    return answer;
}