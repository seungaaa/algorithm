/*
 다섯 자리의 정수 1개를 입력받아 각 자리별로 나누어 출력한다.
*/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string a = "";
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        cout << "[" << a[i];
        for (int j = a.size() - 1; j > i; j--) {
            cout << "0";
        }
        cout << "]" << "\n";
    }
}
