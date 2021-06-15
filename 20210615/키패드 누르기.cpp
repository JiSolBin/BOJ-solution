#include <string>
#include <vector>
#include <math.h>

using namespace std;

typedef struct coord {
    int x;
    int y;
} coord;

string solution(vector<int> numbers, string hand) {
    string answer = "";

    coord left, right;
    left.y = 3; left.x = 0;
    right.y = 3; right.x = 2;

    for (int i = 0; i < numbers.size(); i++) {
        int num = numbers[i];

        if (num % 3 == 1) {
            left.y = (num - 1) / 3;
            left.x = 0;
            answer += "L";
        }
        else if (num % 3 == 0 && num != 0) {
            right.y = (num - 1) / 3;
            right.x = 2;
            answer += "R";
        }
        else {
            coord numCoord;
            numCoord.x = 1;
            num != 0 ? numCoord.y = (num - 1) / 3 : numCoord.y = 3;

            int leftDiff = abs(numCoord.x - left.x) + abs(numCoord.y - left.y);
            int rightDiff = abs(numCoord.x - right.x) + abs(numCoord.y - right.y);

            if (leftDiff < rightDiff) {
                left.x = numCoord.x;
                left.y = numCoord.y;
                answer += "L";
            }
            else if (leftDiff > rightDiff) {
                right.x = numCoord.x;
                right.y = numCoord.y;
                answer += "R";
            }
            else {
                if (hand == "left") {
                    left.x = numCoord.x;
                    left.y = numCoord.y;
                    answer += "L";
                }
                else {
                    right.x = numCoord.x;
                    right.y = numCoord.y;
                    answer += "R";
                }
            }
        }
    }

    return answer;
}