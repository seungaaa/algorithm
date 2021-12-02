/*
 출석 번호를 n번 무작위로 불렀을 때, 가장 빠른 번호를 출력해 보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, min = 23;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << min;
}
