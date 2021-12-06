/*
 기능개발
 https://programmers.co.kr/learn/courses/30/lessons/42586
 */

#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    
    for (int i = 0; i < progresses.size(); i++) {
        if ((100 - progresses[i]) % speeds[i] != 0)
            q.push((100 - progresses[i]) / speeds[i] + 1);
        else
            q.push((100 - progresses[i]) / speeds[i]);
    }
    
    int cnt = 1;
    int tmp = q.front();
    
    while (!q.empty()) {
        q.pop();
        if (tmp < q.front() || q.empty()) {
            answer.push_back(cnt);
            tmp = q.front();
            cnt = 1;
        }
        else
            cnt ++;
    }
    return answer;
}
