/*공백이 포함되어 있는 한 문장 출력*/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    char data[2001] = "";
    cin.getline(data, 2000);
    cout << data;
}
