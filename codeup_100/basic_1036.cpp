/*
 영문자 1개를 입력받아 아스키 코드표의 10진수 값으로 출력해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char ascii;
    cin >> ascii;
    cout << (int)ascii;
}
