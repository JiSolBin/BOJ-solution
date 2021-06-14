#include <string>
#include <vector>
#include <deque>
using namespace std;

string solution(string new_id) {
    string answer = "";
    bool b = true;

    for (int i = 0; i < new_id.size(); i++) {
        if (b == true && new_id[i] == '.') continue; //제일 처음 마침표X, 연속 마침표X
        else if (new_id[i] >= 'A' && new_id[i] <= 'Z') {
            b = false;
            answer += tolower(new_id[i]);
        }
        else if (new_id[i] == '.' || new_id[i] == '-' || new_id[i] == '_' || (new_id[i] >= '0' && new_id[i] <= '9') || (new_id[i] >= 'a' && new_id[i] <= 'z')) {
            if (new_id[i] == '.') b = true;
            else b = false;
            answer += new_id[i];
        }
    }

    if (answer.empty()) answer += 'a'; //5단계
    while (answer.size() > 15) answer = answer.substr(0, 15); //6단계
    if (answer.back() == '.') answer.pop_back(); //제일 마지막 마침표X
    while (answer.size() < 3) answer += answer.back(); //7단계

    return answer;
}