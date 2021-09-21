/*
 영문자 1개를 입력받아 그 다음 문자를 출력해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char ascii;
    cin >> ascii;
    ascii += 1;
    cout << ascii;
}
