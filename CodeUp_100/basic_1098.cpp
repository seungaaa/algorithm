/*
 격자판의 세로(h), 가로(w), 막대의 개수(n), 각 막대의 길이(l),
 막대를 놓는 방향(d:가로는 0, 세로는 1)과
 막대를 놓는 막대의 가장 왼쪽 또는 위쪽의 위치(x, y)가 주어질 때,
 격자판을 채운 막대의 모양을 출력하는 프로그램을 만들어보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int h, w, n, l, d, x, y, arr[100][100] = {};
    cin >> h >> w;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> l >> d >> x >> y;
        if (d)
            for (int j = 0; j < l; j++)
                arr[x-1+j][y-1] = 1;
        else
            for (int j = 0; j < l; j++)
                arr[x-1][y-1+j] = 1;
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
}
