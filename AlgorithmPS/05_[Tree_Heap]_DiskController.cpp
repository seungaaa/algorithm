/*
 디스크 컨트롤러
 https://programmers.co.kr/learn/courses/30/lessons/42627
 */

#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// 우선순위 큐 오름차순 정렬을 위한 구조체 (greater<int> 2차원 적용)
struct cmp {
    bool operator()(vector<int> a, vector<int> b){
        return a[1] > b[1];
    }
};

int solution(vector<vector<int>> jobs) {
    int answer = 0;
    
    sort(jobs.begin(), jobs.end());
    priority_queue<vector<int>,vector<vector<int>>, cmp> pq;
    
    int i = 0;
    int time = 0;
    
    while (i < jobs.size() || !pq.empty()){
        
        if (i < jobs.size() && time >= jobs[i][0]) {
            pq.push(jobs[i++]);
            continue;
        }
        
        if (!pq.empty()) {
            time += pq.top()[1];
            answer += time - pq.top()[0];
            pq.pop();
        }
        
        else
            time = jobs[i][0];
    }
    
    answer /= jobs.size();
    return answer;
}
