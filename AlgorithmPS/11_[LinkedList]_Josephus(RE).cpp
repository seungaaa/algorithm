/*
 요세푸스 문제
 https://www.acmicpc.net/problem/1158
 */

#include <iostream>
#include <queue>

using namespace std;

int main(){
    int N, K;
    queue<int> remain;
    
    cin >> N >> K;
    for (int i = 1; i <= N; i++){
        remain.push(i);
    }
    cout << "<";
    while (!remain.empty()) {
        for (int i = 1; i < K; i++) {
            remain.push(remain.front());
            remain.pop();
        }
        cout << remain.front();
        remain.pop();
        if (!remain.empty())
            cout << ", ";
        else
            cout << ">";
    }
}
