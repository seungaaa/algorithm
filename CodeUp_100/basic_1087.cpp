/*
 1, 2, 3 ... 을 순서대로 계속 더해나갈 때,
 그 합이 입력한 정수보다 작을 동안만 계속 더하는 프로그램을 작성해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, result = 0;
    cin >> n;
    for (int i = 1; result < n; i++){
        result += i;
    }
    cout << result;
}
