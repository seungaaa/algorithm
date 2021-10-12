/*
 입력된 정수를 비트단위로 참/거짓을 바꾼 후 정수로 출력해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a;
    cin >> a;
    cout << ~a;
}
