/*
 정수 1개를 입력받아 2배 곱해 출력해보자.
 (비트연산자 사용)
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a;
    cin >> a;
    
    a = a << 1;
    cout << a;
}
