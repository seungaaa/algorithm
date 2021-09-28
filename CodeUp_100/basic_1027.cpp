/*
 년월일(yyyy.mm.dd)를 입력받아, 일월년(dd-mm-yyyy)로 출력해보자.
*/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int year, month, day;
    scanf("%d.%d.%d", &year, &month, &day);
    printf("%02d-%02d-%04d", day, month, year);
}
