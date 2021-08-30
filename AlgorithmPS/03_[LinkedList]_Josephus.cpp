/*
 요세푸스 문제
 https://www.acmicpc.net/problem/1158
 */

#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> list;

    int n, k;
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++) {
        list.push_back(i);
    }
    
    cout << "<";
    while (list.size() > 0) {
        for (int i = 1; i < k ; i++) {
            list.push_back(list.front());
            list.pop_front();
        }
        cout << list.front();
        list.pop_front();
        
        if (list.size() > 0)
            cout << ", ";
        else
            cout << ">";
    }
    
    return 0;
}
