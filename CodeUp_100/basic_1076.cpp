/*
 영문자(a ~ z) 1개가 입력되었을 때 그 문자까지의 알파벳을 순서대로 출력해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char x, tmp = 'a';
    cin >> x;
    
    do {
        cout << tmp << " ";
        tmp++;
    } while (tmp < x+1);
}
