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

    vector<int> cnt;
    for (int i = citations.size(); i > 0; i--){
        cnt.push_back(i);
    }

    for (int j = 0; j < citations.size(); j++){
        if (citations[j] >= cnt[j]) {
            answer = cnt[j];
            break;
        }
    }

    return answer;
}
