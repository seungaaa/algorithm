/*
 점수(정수, 0 ~ 100)를 입력받아 평가를 출력해보자.
 90 ~ 100 : A
 70 ~  89 : B
 40 ~  69 : C
 0  ~  39 : D
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int score;
    cin >> score;
    if (score >= 90)
        cout << "A";
    else if (score >= 70)
        cout << "B";
    else if (score >= 40)
        cout << "C";
    else
        cout << "D";
}
