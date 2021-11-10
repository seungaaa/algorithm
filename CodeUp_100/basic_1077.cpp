/*
 정수(0 ~ 100) 1개를 입력받아 0부터 그 수까지 순서대로 출력해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    cin >> x;
    
    for (int i = 0; i <= x; i++) {
        cout << i <<endl;
    }
}
