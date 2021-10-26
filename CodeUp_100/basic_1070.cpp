/*
 월이 입력될 때 계절 이름이 출력되도록 해보자.
 12, 1, 2 : winter
 3, 4, 5 : spring
 6, 7, 8 : summer
 9, 10, 11 : fall
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int month;
    cin >> month;
    switch(month)
    {
        case 3: case 4: case 5:
            cout << "spring";
            break;
        case 6: case 7: case 8:
            cout << "summer";
            break;
        case 9: case 10: case 11:
            cout << "fall";
            break;
        default:
            cout << "winter";
    }
}
