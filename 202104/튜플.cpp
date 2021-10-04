#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

//두 번째 값 기준 내림차순 정렬
bool compare(pair<int, int> &a, pair<int, int> &b) {
    return a.second > b.second;
}

vector<int> solution(string s) {
    vector<int> answer;
    map<int, int, greater<int>> temp;
    int element = 0;

    //입력된 문자열에서 숫자만 temp에 저장하기
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9')
            element = element * 10 + s[i] - '0';
        else if (element != 0) {
            temp[element]++;
            element = 0;
        }
    }

    //정렬하기 위해 벡터에 값 옮기기 (first = 원소, second = 빈도수)
    vector<pair<int, int>> sortedTemp;
    for (auto x : temp) {
        sortedTemp.push_back({ x.first,x.second });
    }

    sort(sortedTemp.begin(), sortedTemp.end(), compare);

    //정렬된 벡터 출력변수에 옮기기
    for (auto x : sortedTemp) {
        answer.push_back(x.first);
    }

    return answer;
}