#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

//�� ��° �� ���� �������� ����
bool compare(pair<int, int> &a, pair<int, int> &b) {
    return a.second > b.second;
}

vector<int> solution(string s) {
    vector<int> answer;
    map<int, int, greater<int>> temp;
    int element = 0;

    //�Էµ� ���ڿ����� ���ڸ� temp�� �����ϱ�
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9')
            element = element * 10 + s[i] - '0';
        else if (element != 0) {
            temp[element]++;
            element = 0;
        }
    }

    //�����ϱ� ���� ���Ϳ� �� �ű�� (first = ����, second = �󵵼�)
    vector<pair<int, int>> sortedTemp;
    for (auto x : temp) {
        sortedTemp.push_back({ x.first,x.second });
    }

    sort(sortedTemp.begin(), sortedTemp.end(), compare);

    //���ĵ� ���� ��º����� �ű��
    for (auto x : sortedTemp) {
        answer.push_back(x.first);
    }

    return answer;
}