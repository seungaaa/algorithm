---
title: "Graph & Shortest Path" 
date: 2021-08-30
description: "Algorithm seminar for basic graph and shortest path"
---
author: @jean1042


# 1. Graph

## 1-1. Definition
### 그래프란?
그래프는 연결되어 있는 객체 간의 관계를 표현하는데 적합한 자료구조로, 다음과 같이 정의함

### Graph의 정의
- __그래프 G는 `(V, E)`로 표시한다__
![image](https://user-images.githubusercontent.com/25656426/131441640-138dace0-1667-4b03-9a4f-f13b4180a058.png)

- V는 그래프에 있는 정점들의 집합 (node라고도 불림)
- E는 정점을 연결하는 간선들의 집합 (edge, link, arc라고도 불림)

### 1-2. Graph의 분류
__Undirected graph (무방향 그래프)__
- 두 정점을 연결하는 간선의 방향이 없는 그래프. 점 A와 B를 연결하는 간선은 `(A, B)`로 표현하는데
- Undirected graph에서 (A, B)와 (B, A) 는 같은 간선을 나타냄

__Digraph (방향그래프, directed graph)__
- 간선이 방향을 갖고 있는 그래프
- 정점 A에서 정점 B를 연결하는 간선 `A -> B`를 `<A, B>`로 표현
- <A, B>, <B, A>는 서로 다른 간선
- `V(G4) = {A, B, C}, E(G4)={<A,B>, <A,C>,<B,A>,<B,C>}`
![image](https://user-images.githubusercontent.com/25656426/131442122-62c3d7dc-ebda-49af-a6c8-734f570aefad.png)

__Weighted Graph (가중 그래프)__
- 간선에 cost나 가중치(weight)가 할당된 그래프
![image](https://user-images.githubusercontent.com/25656426/131442323-ffb054fe-5a0d-4795-9517-ec1c158809b4.png)

## 1-3. Graph 관련 용어
- 인접 (adjacent) : 두 vertex를 연결하는 edge가 존재할 경우, 그 두 정점은 서로 인접한다고 말함
- __차수 (degree)__ : 
    - __무방향그래프__ 의 경우, 하나의 vertex 에 연결된 edge의 의 개수
    - __방향그래프__ 의 경우, in-degree(진입차수) 와 out-degree(진출차수) 로 구분함<br>
- ex. G1에서 vertex 0의 degree는 3 <br>
![image](https://user-images.githubusercontent.com/25656426/131442629-2e68a8bf-cbab-49b2-9b87-045f84ba0f2b.png) <br>

- __경로 (path)__ : Graph에서 edge를 따라갈 수 있는 길을 순서대로 나열한 것. ex) A-B-C
- Path 중 시작 vertex와 종료 vertex가 동일한 경로는 사이클을 형성한다고 함.



## 1-4. Graph의 구현 
### 인접행렬 (Adjacent matrix) 을 통해..
인접행렬은 `2차원(N*N)` 정방행렬을 사용해 인접 여부를 값으로 저장해 그래프를 구현하는 방식이다.

```
if 간선 `(i,j)`가 그래프에 존재하면 `M[i][j]=1`, 그렇지 않으면 `M[i][j]=0` 으로 표현
```
인접행렬의 대각선 성분은 모두 0이 된다는 특징이 있음 <br>
![image](https://user-images.githubusercontent.com/25656426/131444672-e21e5122-121a-4b14-89c8-65f199d44143.png)

간선에 가중치가 있는 경우, 가중치를 행렬의 원소 값으로 가지기도 함.



#### Note) 그래프 관련 연산 문제에는..
- Graph traversal / search (그래프 순회/탐색)
- Minimum spnning tree (최소 비용 신장트리)
- Shortest path problem (최단 경로 거리 문제)
등이 있다. 

그중에 우리 Jjeju회원들은..! shortest path 문제를 더 공부해봅시다.

 
<br>

# 2. Shortest Path Problem (최단 경로 거리 문제)
Shortest path problem은 가중 그래프에서 vertex `u`와 vertex `v`를 연결하는 경로 중에서 edge의 가중치 합이 최소가 되는 경로, 거리를 발견하는 문제.

문제를 푸는 알고리즘
```
1. BFS
2. Dijkstra algorithm (다익스트라 알고리즘)
3. Floyd-Warshall algorithm.. (플로이드-워셜 알고리즘..) 
```
| Name | Description | 용도 | 구현방식 | 구현코드 | 구현식 |
|----|-----------|--------|---------| ----|-----|
|BFS| node를 방문하면서 인접한 node중에 방문하지 않았던 노드의 정보만 Queue에 넣어 먼저 Queue에 들어있던 node부터 방문함 | __`edge에 weight가 부여되지 않은 그래프 상의 최단거리 찾을 때 사용`__| __Queue__ | [BFS](!###BFS) | 
| Dijkstra algorithm | 시작 node를 기준으로 다른 모든 node 사이의 거리를 계산하는 알고리즘, 시작 node에서 최단 거리가 짧은 노드를 차례대로 선택하면서 거리를 계산한다.<br> `dist_curr ← min(dist_curr, dist_next + cost(curr,next))` | __`edge에 weight 있고, 음수 weight 없을 때 사용`__ | __Priority Queue__ | [Dijkstra_algorithm](!###Dijkstra_algorithm)|
| Floyd-Warshall | i에서 출발해 j로 가는 경로에서 i를 출발해 j로 바로 가는 것보다, k를 거쳐 j로 가는게 효율적일 경우 해당 값을 갱신해주는 개념. d(k)(i,j)= 노드 0부터 k를 경유할 수 있을 때 node i로부터 node j까지의 최단거리라고 정의하면, `d(a,b)` = `min (d(a,b),  d(a,k)+d(k,b)) ` | `모든 node쌍 사이의 거리를 알아야할 때` | __Graph__ | [Floyd-Warshall](!Floyd_Warshall_algorithm)| 



### BFS
```
from collections import deque

def BFS_with_list(graph, root):
    visited = []
    queue = deque([root])

    while queue:
        n = queue.popleft()
        if n not in visited:
            visited.append(n)
            queue += graph[n] - set(visited)
    return visited
  
print(BFS_with_adj_list(graph_list, root_node))
```

### Dijkstra algorithm
```
import heapq  # For priority Queue

def dijkstra(graph, start):
  distances = {node: float('inf') for node in graph}  # Distance from start
  distances[start] = 0 
  queue = []
  heapq.heappush(queue, [distances[start], start])  # Search from start node

  while queue:  # queue에 남아 있는 노드가 없으면 끝
    current_distance, current_destination = heapq.heappop(queue)  # 탐색 할 노드, 거리를 가져옴.

    if distances[current_destination] < current_distance:  # 기존에 있는 거리보다 길다면, 볼 필요도 없음
      continue
    
    for new_destination, new_distance in graph[current_destination].items():
      distance = current_distance + new_distance  # 해당 노드를 거쳐 갈 때 거리
      if distance < distances[new_destination]:  # 알고 있는 거리 보다 작으면 갱신
        distances[new_destination] = distance
        heapq.heappush(queue, [distance, new_destination])  # 다음 인접 거리를 계산 하기 위해 큐에 삽입
    
  return distances
```

### Floyd Warshall algorithm
Dijkstra algorithm은 서울에서 시작해 인천, 목포, 강릉의 최소 거리를 구하는 것이고 Floyd-Warshall algorithm은 서울-인천, 서울-목포, 인천-강릉, 인천-목포 와 같은 모든 쌍을 한번에 계산하는 방식이라고 할 수 있음
```
INF = int(1e9)

#노드의 개수 및 간선의 개수를 입력받기
n,m=map(int,input().split())

#2차원 리스트(그래프 표현)를 만들고, 모든 값을 무한으로 초기화
graph=[[INF]*(n+1) for _ in range(n+1)]

#자기 자신에서 자기 자신으로 가는 비용은 0으로 초기화
for a in range(1,n+1):
    for b in range(1,n+1):
        if a==b:
            graph[a][b]=0

#각 edge에 대한 정보를 입력받아, 그 값으로 초기화
for _ in range(m):
    #A에서 B로 가는 비용은 C라고 설정
    a,b,c = map(int,input().split())
    graph[a][b]=c

#점화식에 따라 플로이드 워셜 알고리즘을 수행
for k in range(1,n+1):
    for a in range(1,n+1):
        for b in range(1,n+1):
            graph[a][b]=min(graph[a][b],graph[a][k]+graph[k][b])

#수행된 결과를 출력
for a in range(1,n+1):
    for b in range(1,n+1):
        if graph[a][b]==INF:
            print("INFINITY",end=' ')
        else:
            print(graph[a][b],end=' ')
    print()
```


[참고 자료](!https://freedeveloper.tistory.com/385)


### 풀어올 문제
최단경로 문제 <br>
https://www.acmicpc.net/problem/1753