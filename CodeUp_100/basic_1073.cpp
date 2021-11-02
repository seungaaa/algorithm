/*
 0 입력될 때까지 무한 출력하기2
 0이 아니면 입력된 정수를 출력하고, 0이 입력되면 출력을 중단해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    while (n != 0) {
        cout << n << endl;
        cin >> n;
    }
}
