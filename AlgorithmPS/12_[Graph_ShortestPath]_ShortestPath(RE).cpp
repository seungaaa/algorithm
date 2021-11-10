/*
 최단경로
 https://www.acmicpc.net/problem/1753
 */

#include<iostream>
#include<vector>
#include<queue>
#define INF 1e9

using namespace std;
 
int main()
{
    int V, E;   //정점 V개, 간선 E개
    cin >> V >> E;
    
    int K;  //시작점 K
    cin >> K;
    
    vector<pair <int, int>> arr[V+1];
    for(int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        arr[u].push_back({v,w});
    }
    
    vector<int> dist(V+1);
    fill(dist.begin(), dist.end(), INF);
    dist[K] = 0;    //시작점 0으로 초기화
    
    priority_queue<pair <int,int>> smallest; //우선순위큐 값 모두 넣어서 마지막에 dist에 저장
    smallest.push({0,K});
    while(!smallest.empty()) {
        int here = smallest.top().second;
        smallest.pop();
        
        for (int i = 0; i < arr[here].size(); i++) {
            int next = arr[here][i].first;
            int nextweight = arr[here][i].second;
            
            if(dist[next] > dist[here] + nextweight) {
                dist[next] = dist[here] + nextweight;
                smallest.push({-dist[next], next});
            }
        }
    }
    
    for (int i = 1; i < dist.size(); i++) {
        if (dist[i] == INF)
            cout << "INF" << endl;
        else
            cout << dist[i]<< endl;
    }
}
