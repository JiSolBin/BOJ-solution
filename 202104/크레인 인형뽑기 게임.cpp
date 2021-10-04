#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;

    for (int i = 0; i < moves.size(); i++) {
        for (int j = 0; j < board.size(); j++) {
            int cur = board[j][moves[i] - 1];

            if (cur) {
                if (!s.empty() && s.top() == cur) {
                    answer += 2;
                    s.pop();
                }
                else
                    s.push(cur);

                board[j][moves[i] - 1] = 0;
                break;
            }
        }
    }

    return answer;
}