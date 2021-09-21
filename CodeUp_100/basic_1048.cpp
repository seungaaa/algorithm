/*
 정수 2개(a, b)를 입력받아 a를 2^b배 곱한 값으로 출력해보자.
 (0 <= a <= 10, 0 <= b <= 10)
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, result;
    cin >> a >> b;
    
    result = a << b;
    cout << result;
}
