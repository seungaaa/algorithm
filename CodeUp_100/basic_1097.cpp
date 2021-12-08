/*
 바둑판(19 * 19)에 흰 돌(1) 또는 검정 돌(0)이 모두 꽉 채워져 놓여있을 때,
 n개의 좌표를 입력받아 십(+)자 뒤집기한 결과를 출력하는 프로그램을 작성해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, x, y, arr[19][19] = {};
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++)
            cin >> arr[i][j];
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        for (int j = 0; j < 19; j++) {
            if (arr[x-1][j])
                arr[x-1][j] = 0;
            else
                arr[x-1][j] = 1;
        }
        for (int j = 0; j < 19; j++) {
            if (arr[j][y-1])
                arr[j][y-1] = 0;
            else
                arr[j][y-1] = 1;
        }
    }
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
}
