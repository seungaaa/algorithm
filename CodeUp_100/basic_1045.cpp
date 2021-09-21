/*
 정수 2개(a, b)를 입력받아 합, 차, 곱, 몫, 나머지, 나눈 값을 자동으로 계산해보자.
 (단 0 <= a, b <= 2147483647, b는 0이 아니다.)
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    long int a, b;
    cin >> a >> b;
    cout << fixed;
    cout.precision(2);
    cout << a+b << endl << a-b << endl << a*b << endl << a/b << endl << a%b << endl << (double)a/(double)b;
}
