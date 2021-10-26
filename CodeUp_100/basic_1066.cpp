/*
 세 정수 a, b, c가 입력되었을 때, 짝(even)/홀(odd)을 출력해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a%2 == 0)
        cout << "even" << endl;
    else
        cout << "odd" << endl;
    if (b%2 == 0)
        cout << "even" << endl;
    else
        cout << "odd" << endl;
    if (c%2 == 0)
        cout << "even";
    else
        cout << "odd";
}
