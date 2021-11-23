/*
 여행경로
 https://programmers.co.kr/learn/courses/30/lessons/43164
 */

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool DFS(string start, vector<vector<string>>& tickets, vector<bool>& visited, vector<string>& answer, vector<string>& tmp, int cnt) {
    tmp.push_back(start);

    if(cnt == tickets.size()) {
        answer = tmp;
        return true;
    }

    for(int i = 0; i < tickets.size(); i++) {
        if(tickets[i][0] == start && !visited[i]) {
            visited[i] = true;
            bool success = DFS(tickets[i][1], tickets, visited, answer, tmp, cnt+1);
            if(success)
                return true;
            visited[i] = false;
        }
    }
    tmp.pop_back();
    return false;
}

vector<string> solution(vector<vector<string>> tickets) {
    vector<string> answer, tmp;
    vector<bool> visited(tickets.size());
    sort(tickets.begin(), tickets.end());
    
    DFS("ICN", tickets, visited, answer, tmp, 0);
    return answer;
}
