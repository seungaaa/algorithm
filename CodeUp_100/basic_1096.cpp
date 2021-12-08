/*
 바둑판(19 * 19)에 n개의 흰 돌을 놓는다고 할 때,
 n개의 흰 돌이 놓인 위치를 출력하는 프로그램을 작성해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, x, y, arr[19][19] = {};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        arr[x-1][y-1] = 1;
    }
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
}
