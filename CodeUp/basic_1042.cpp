/*
 정수 2개(a, b) 를 입력받아 a를 b로 나눈 몫을 출력해보자.
 (단, -2147483648 <= a <= b <= +2147483647, b는 0이 아니다.)
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    long int a, b, result;
    cin >> a >> b;
    result = a / b;
    cout << result;
}
