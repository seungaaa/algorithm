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
    int V, E;
    cin >> V >> E;  //엣지와 간선 개수
    
    int K;
    cin >> K;   //시작점
    
    vector<pair<int,int> > arr[V+1];
    for(int i = 0; i < E; i++){
        int u, v, w;
        cin >> u >> v >> w; //그래프 상의 간선 정보
        arr[u].push_back({v,w});
    }
    
    int dist[V+1];  //최단거리를 갱신하여 저장할 배열
    fill(dist, dist+V+1, INF);  //무한대로 초기화
    dist[K] = 0;  //시작점 최단거리 = 0으로 초기화
    
    priority_queue<pair<int,int> > qu;
    qu.push({0, K}); //우선순위 큐에 시작점 추가

    while(!qu.empty()){
        int here = qu.top().second;     //here을 방문할 점의 번호
        qu.pop();
            
        for(int i = 0; i < arr[here].size(); i++){
            int next = arr[here][i].first;
            int nextcost = arr[here][i].second;
            
            if(dist[next] > dist[here] + nextcost){
                //현재 next에 저장된 dist의값보다 현재의 점을 거쳐서 갈 경우가 거리가 더 짧으면 갱신하여 큐에 추가
                dist[next] = dist[here] + nextcost;
                qu.push({-dist[next], next});
            }
        }
    }
    for (int i = 1; i <= V; i++){
        if (dist[i] == INF)
            cout << "INF\n";
        else
            cout << dist[i] << "\n";
    }
}
