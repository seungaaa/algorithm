/*
 H-Index
 https://programmers.co.kr/learn/courses/30/lessons/42747
 */

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end());

    /* cnt 배열 -> int로 초기화해주고 하나씩 빼주면 됨
    vector<int> cnt;
    for (int i = citations.size(); i > 0; i--){
        cnt.push_back(i);
    }
    */
    
    int cnt = citations.size();
    for (int j = 0; j < citations.size(); j++){
        if (citations[j] >= cnt) {
            answer = cnt;
            break;
        }
        cnt--;
    }
    
    return answer;
}
