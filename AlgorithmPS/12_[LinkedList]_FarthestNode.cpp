/*
 가장 먼 노드
 https://programmers.co.kr/learn/courses/30/lessons/49189
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
        int length[20001];// length[2] 는 1번노드에서 2번노드까지 거리
        int visited[20001];
        
        memset(length,0,sizeof(length));
        memset(visited,0,sizeof(visited));
        
        for(int i=0;i<edge.size();i++)
        {
            map[edge[i][0]].push_back(edge[i][1]);
            map[edge[i][1]].push_back(edge[i][0]);
        }
        queue<int> q;
        q.push(1);
        visited[1] = 1;
        int cnt = 0;
        while(!q.empty())
        {
            int s = q.size();
            for(int k = 0; k < s; k++)
            {
                int here = q.front();
                q.pop();
                length[here] = cnt;
                for(int i = 0;i < map[here].size(); i++)
                {
                    if(visited[map[here][i]] == 1)
                        continue;
                    visited[map[now][i]] = 1;
                    q.push(map[now][i]);
                }
                
            }
            cnt++;
        }
        int find_max = 0;
        for (int i = 1; i <= n; i++)
        {
            if (length[i] > find_max)
                find_max = length[i];
        }
        for(int i = 1; i <= n; i++)
        {
            if(length[i] == find_max)
                answer++;
        }
        return answer;
}
