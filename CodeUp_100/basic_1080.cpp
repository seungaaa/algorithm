/*
 1, 2, 3 ... 을 계속 더해 나갈 때,
 그 합이 입력한 정수(0 ~ 1000)보다 같거나 작을 때까지 계속 더하는 프로그램을 작성해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x, sum = 0;
    cin >> x;
    for (int i = 1; sum < x; i++) {
        sum += i;
        if (sum >= x)
            cout << i;
    }
}
