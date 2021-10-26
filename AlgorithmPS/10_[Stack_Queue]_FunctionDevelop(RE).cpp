/*
 기능개발
 https://programmers.co.kr/learn/courses/30/lessons/42586
 */

#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> day;

    for (int i = 0; i < progresses.size(); i++){
        day.push((99-progresses[i])/speeds[i]);
    }
    
    int tmp = day.front();
    int cnt = 1;
    while (!day.empty()) {
        day.pop();
        if (tmp < day.front() || day.empty()) {
            tmp = day.front();
            answer.push_back(cnt);
            cnt = 1;
        }
        else
            cnt++;
    }
    return answer;
}
