/*
 순위
 https://programmers.co.kr/learn/courses/30/lessons/49191
 */

#include <vector>

using namespace std;

int solution(int n, vector<vector<int>> results) {
    int answer = 0;
    vector<vector<bool>> graph(n+1, vector<bool>(n+1, false));

    for(auto r : results) {
        int winner = r[0];
        int loser = r[1];
        graph[winner][loser] = true;
    }

    for(int b = 1; b <= n; b++) {
        for(int a = 1; a <= n; a++) {
            for(int c = 1; c <= n; c++) {
                if(graph[a][b] && graph[b][c])
                    graph[a][c] = true;
            }
        }
    }
    
    for(int i = 1; i <= n; i++) {
        int winCount = 0;
        for(int j = 1; j <= n; j++) {
            if(i == j)
                continue;
            if(graph[i][j] || graph[j][i])
                winCount++;
        }
        if (winCount == n-1)
            answer++;
    }
    return answer;
}
