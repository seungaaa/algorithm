/*
 정수 2개를 입력받아 합을 출력해보자.
 (단, 입력되는 정수는 -2,147,483,648 ~ +2,147,483,648 이다.)
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    long long int a, b;
    cin >> a >> b;
    cout << a + b;
}
