/*
 디스크 컨트롤러
 https://programmers.co.kr/learn/courses/30/lessons/42627
 */

#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct cmp {
    bool operator()(vector<int> a, vector<int> b){
        return a[1] > b[1];
    }
};

int solution(vector<vector<int>> jobs) {
    int answer = 0;
    sort(jobs.begin(), jobs.end()); //[0,3],[1,9],[2,6]
    priority_queue<vector<int>,vector<vector<int>>, cmp> task;

    int i = 0;
    int time = 0;
    
    while (i < jobs.size() || !task.empty()) {
        //if (jobs[i][0] <= time && i < jobs.size()) - 왜 안될까?
        if (i < jobs.size() && jobs[i][0] <= time) {
            task.push(jobs[i++]);
            continue;
        }
        if (!task.empty()) {
            time += task.top()[1];
            answer += time - task.top()[0];
            task.pop();
        }
        else
            time = jobs[i][0];
    }
    answer /= jobs.size();
    return answer;
}
