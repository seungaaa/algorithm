/*
 H-Index
 https://programmers.co.kr/learn/courses/30/lessons/42747
 */

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.rbegin(), citations.rend());
    for (int i = 0; answer < citations[i]; i++){
        answer++;
    }
    return answer;
}
