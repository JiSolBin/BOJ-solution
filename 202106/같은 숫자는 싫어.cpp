#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    int cur = 0;
    answer.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++) {
        if (answer[cur] != arr[i]) {
            answer.push_back(arr[i]);
            cur++;
        }
    }

    return answer;
}