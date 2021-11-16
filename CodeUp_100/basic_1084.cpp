/*
 빨강(r), 초록(g), 파랑(b) 각각의 빛의 개수가 주어질 때,
 (빛의 강약에 따라 0 ~ n-1 까지 n가지의 빛 색깔을 만들 수 있다.)
 주어진 rgb 빛들을 다르게 섞어 만들 수 있는 모든 경우의 조합(r g b)과 총 가짓 수를 계산해보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int r, g, b, cnt = 0;
    cin >> r >> g >> b;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < g; j++) {
            for (int k = 0; k < b; k++) {
                cout << i << " " << j << " " << k << "\n";
                cnt++;
            }
        }
    }
    cout << cnt;
}
