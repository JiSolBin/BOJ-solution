#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int res = 0, curWeight = 0;
    queue<int> brigeOn, distance;

    while (true) {
        //중간에 차가 빠져나가면 계산이 바뀌기때문에 size고정
        int size = distance.size();

        //다리 위 트럭 한칸씩 이동
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

        //아직 건너지 않은 트럭이 있고
        //(현재 다리 위 무게 + 다음차례에 다리 위에 올라올 트럭의 무게)를 감당할 수 있을 때
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