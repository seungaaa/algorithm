/*
 정수 3개를 입력받아 합과 평균을 출력해보자.
 (단, -2147483648 ~ +2147483647)
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    long int a, b, c;
    cin >> a >> b >> c;
    cout << a+b+c << endl;
    
    cout << fixed;
    cout.precision(1);
    cout << (double)(a+b+c)/3;
}
