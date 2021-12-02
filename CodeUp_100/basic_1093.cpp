/*
 출석 번호를 n번 무작위로 불렀을 때, 각 번호(1 ~ 23)가 불린 횟수를 각각 출력해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, t, arr[24] = {};
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> t;
        arr[t]++;
    }
    for (int i = 1; i <= 23; i++) {
        cout << arr[i] << " ";
    }
}
