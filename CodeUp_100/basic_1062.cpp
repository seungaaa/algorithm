/*
 입력된 정수 두 개를 비트단위로 xor 연산한 후 그 결과를 정수로 출력해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a >> b;
    int c = a ^ b;
    cout << c;
}
