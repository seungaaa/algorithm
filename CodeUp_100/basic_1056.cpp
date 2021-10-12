/*
 두 가지의 참(1) 또는 거짓(0)이 입력될 때,
 참/거짓이 서로 다를 때에만 참을 출력하는 프로그램을 작성해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    bool a, b;
    cin >> a >> b;
    if ((a&&!b)||(!a&&b))
        cout << 1;
    else
        cout << 0;
}
