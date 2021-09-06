/*
 실수 1개를 입력받아 그대로 출력해보자.
 (단, 입력되는 실수의 범위는 +- 1.7*10-308 ~ +- 1.7*10308 이다.)
*/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    double d;
    cin >> d;
    cout << fixed;
    cout.precision(11);
    cout << d;
}
