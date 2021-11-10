/*
 'q'가 입력될 때까지 입력한 문자를 계속 출력하는 프로그램을 작성해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char x;
    while (1) {
        cin >> x;
        if (x == 'q') {
            cout << x << endl;
            break;
        }
        else
            cout << x << endl;
    }
}
