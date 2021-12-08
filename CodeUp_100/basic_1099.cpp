/*
 미로 상자에 넣은 개미는 먹이를 찾았거나, 더 이상 움직일 수 없을 때까지 오른쪽 또는 아래쪽으로만 움직였다.
 미로 상자의 구조가 0(갈 수 있는 곳), 1(벽 또는 장애물)로 주어지고,
 먹이가 2로 주어질 때, 성실한 개미의 이동 경로를 예상해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[10][10], x = 1, y = 1;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            cin >> arr[i][j];
    }
    while (!(arr[x][y] == 2 || (x == 8 && y == 8))) {
        arr[x][y] = 9;
        if (arr[x][y+1] == 1)
            x++;
        else
            y++;
    }
    arr[x][y] = 9;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
}
