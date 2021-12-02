/*
 출석 번호를 n번 무작위로 불렀을 때, 부른 번호를 거꾸로 출력해 보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int arr[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = n; i > 0; i--) {
        cout << arr[i] << " ";
    }
}
