/*
 실수 1개를 입력받아 정수 부분과 실수 부분으로 나누어 출력
*/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    scanf("%d.%d", &a, &b);
    cout << a << "\n" << b;
}
