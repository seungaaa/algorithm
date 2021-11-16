/*
 녹음할 시간 s가 주어질 때,
 필요한 저장 용량을 계산하는 프로그램을 작성해보자.
 */

#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[]) {
    long long int h, b, c, s;
    scanf("%lld %lld %lld %lld", &h, &b, &s, &c);
    double bit = h * b * s * c;
    printf("%.1lf MB", bit/8/1024/1024);
}
