#include <iostream>
using namespace std;

int main(void) {
    int n, result = 0;

    cin >> n;

    do {
        if (n % 5 == 0) {
            cout << result + n / 5;
            return 0;
        }
        else {
            n = n - 3;
            result++;
        }

    } while (n > 0);

    if (n == 0)
        cout << result;
    else
        cout << -1;
}