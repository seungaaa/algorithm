/*
 0 입력될 때까지 무한 출력하기1
 0이 아니면 입력된 정수를 출력하고, 0이 입력되면 출력을 중단해보자.
 while( ), for( ), do~while( ) 등의 반복문을 사용할 수 없다.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
write:
    int n;
    cin >> n;
    if (n != 0) {
        cout << n << endl;
        goto write;
    }
    else
        return 0;
}
