/*
 시작 값(a), 곱할 값(m), 더할 값(d), 몇 번째인지를 나타내는 정수(n)가 입력될 때,
 n번째 수를 출력하는 프로그램을 만들어보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    long a, m, d, n;
    cin >> a >> m >> d >> n;
    for (int i = 1; i < n; i++) {
        a = a * m + d;
    }
    cout << a;
}
