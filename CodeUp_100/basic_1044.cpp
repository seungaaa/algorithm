/*
 정수를 1개 입력받아 1만큼 더해 출력해보자.
 (단, -2147483648 ~ +2147483647 의 범위로 입력된다.)
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    long int a;
    cin >> a;
    cout << ++a;
}
