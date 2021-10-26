/*
 평가를 문자(A, B, C, D, ...)로 입력받아 내용을 다르게 출력해보자.
 A : best!!!
 B : good!!
 C : run!
 D : slowly~
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char eval;
    cin >> eval;
    switch(eval)
    {
        case 'A':
            cout << "best!!!";
            break;
        case 'B':
            cout << "good!!";
            break;
        case 'C':
            cout << "run!";
            break;
        case 'D':
            cout << "slowly~";
            break;
        default:
            cout << "what?";
    }
}
