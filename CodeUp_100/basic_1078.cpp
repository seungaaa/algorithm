/*
 정수(1 ~ 100) 1개를 입력받아 1부터 그 수까지 짝수의 합을 구해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x, sum = 0;
    cin >> x;
    
    for (int i = 0; i <= x; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    cout << sum;
}
