/*
 A, B, C, D, E, F 중 하나가 입력될 때,
 1부터 F까지 곱한 16진수 구구단의 내용을 출력해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> hex >> n;
    for (int i = 1; i <= 0xF; i++)
        cout << hex << uppercase << n << "*" << i << "=" << n*i << "\n";
}
