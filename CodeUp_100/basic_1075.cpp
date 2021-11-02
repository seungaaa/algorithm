/*
 정수 1개 입력받아 카운트다운 출력하기2
 정수(1 ~ 100) 1개가 입력되었을 때 카운트다운을 출력해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    
    while (n != 0){
        n--;
        cout << n << endl;
    }
}
