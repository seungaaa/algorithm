/*
 등굣길
 https://programmers.co.kr/learn/courses/30/lessons/42898
 */

#include <string>
#include <vector>

using namespace std;

int dp[101][101];
int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    for(auto p : puddles){
            dp[p[0]][p[1]] = -1;
    }
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 && j == 1) dp[i][j] = 1;
            else if(dp[i][j] != -1){
                int sum = 0;
                sum += (dp[i-1][j] != -1 ? dp[i-1][j] : 0);
                sum += (dp[i][j-1] != -1 ? dp[i][j-1] : 0);
                dp[i][j] = sum % 1000000007;
            }
        }
    }
    answer = dp[m][n];
    return answer;
}
