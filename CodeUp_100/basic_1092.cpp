/*
 같은 날 동시에 가입한 3명의 사람들이 온라인 채점시스템에 들어와 문제를 푸는 날짜가
 매우 규칙적이라고 할 때, 다시 모두 함께 문제를 풀게 되는 그날은 언제일까?
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c, day = 1;
    cin >> a >> b >> c;
    while (day % a != 0 || day % b != 0 || day % c != 0)
        day++;
    cout << day;
}
