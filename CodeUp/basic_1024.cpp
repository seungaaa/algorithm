/*
 단어를 1개 입력받는다.
 입력받은 단어(영어)의 각 문자를 한줄에 한 문자씩 분리해 출력한다.
*/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string a = "";
    cin >> a;
    for (int i = 0; a[i] != '\0'; i++) {
        cout << "'" << a[i] << "'\n";
    }
}
