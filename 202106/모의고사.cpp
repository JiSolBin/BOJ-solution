#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;

    int arr1[5] = { 1,2,3,4,5 };
    int arr2[8] = { 2,1,2,3,2,4,2,5 };
    int arr3[10] = { 3,3,1,1,2,2,4,4,5,5 };
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;

    for (int i = 0; i <= answers.size(); i++) {
        if (arr1[i % 5] == answers[i]) cnt1++;
        if (arr2[i % 8] == answers[i]) cnt2++;
        if (arr3[i % 10] == answers[i]) cnt3++;
    }

    int max_val = max({ cnt1,cnt2,cnt3 });

    if (cnt1 == max_val) answer.push_back(1);
    if (cnt2 == max_val) answer.push_back(2);
    if (cnt3 == max_val) answer.push_back(3);

    return answer;
}