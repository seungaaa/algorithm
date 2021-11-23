/*
 1부터 입력한 정수까지 1씩 증가시켜 출력하는 프로그램을 작성하되,
 3의 배수인 경우는 출력하지 않도록 만들어보자.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0)
            continue;
        cout << i << " ";
    }
}
