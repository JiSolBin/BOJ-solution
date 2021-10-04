#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int res = 0, curWeight = 0;
    queue<int> brigeOn, distance;

    while (true) {
        //�߰��� ���� ���������� ����� �ٲ�⶧���� size����
        int size = distance.size();

        //�ٸ� �� Ʈ�� ��ĭ�� �̵�
        for (int i = 0; i < size; i++) {
            int length = distance.front();
            distance.pop();

            if (length <= 1) {
                curWeight -= brigeOn.front();
                brigeOn.pop();
                continue;
            }

            distance.push(length - 1);
        }

        //���� �ǳ��� ���� Ʈ���� �ְ�
        //(���� �ٸ� �� ���� + �������ʿ� �ٸ� ���� �ö�� Ʈ���� ����)�� ������ �� ���� ��
        if (truck_weights.size() > 0 && curWeight + truck_weights.at(0) <= weight) {
            brigeOn.push(truck_weights.at(0));
            curWeight += truck_weights.at(0);
            distance.push(bridge_length);
            truck_weights.erase(truck_weights.begin());
        }

        res++;

        if (truck_weights.size() == 0 && brigeOn.size() == 0)
            break; 
    }

    return res;
}