/*
 n개의 입력된 정수를 순서대로 출력해보자.
 while( ), for( ), do~while( ) 등의 반복문을 사용할 수 없다.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n;

write:
    cin >> m;
    cout << m << endl;
    n--;
    if (n != 0) goto write;
}
