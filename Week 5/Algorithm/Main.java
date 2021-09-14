package week5;

import java.util.*;

// 특정 노드까지의 거리를 기록할 수 있는 Node 클래스 = 인접노드를 의미하는 클래스
class Node implements Comparable<Node> {
    private int index;
    private int distance;

    public Node(int index, int distance) {
        this.index = index;
        this.distance = distance;
    }

    public int getIndex() {
        return this.index;
    }

    public int getDistance() {
        return this.distance;
    }

    // 거리(비용)가 짧은 것이 높은 우선순위를 가지도록 설정
    @Override
    public int compareTo(Node other) {
        if (this.distance < other.distance) {
            return -1;
        }
        return 1;
    }
}

public class Main {
    public static final int INF = Integer.MAX_VALUE; // 무한을 의미하는 값으로 10억을 설정    
    public static int V, E, start; // 노드의 개수(V), 간선의 개수(E), 시작 노드 번호(Start)    
    public static ArrayList<ArrayList<Node>> graph = new ArrayList<ArrayList<Node>>(); // 각 노드에 연결되어 있는 노드에 대한 정보를 담는 배열    
    public static int[] distance = new int[30001]; // 최단 거리 테이블 만들기

    public static void dijkstra(int start) {
        PriorityQueue<Node> pq = new PriorityQueue<>();        
        pq.offer(new Node(start, 0)); // 시작 노드로 가기 위한 최단 경로는 0으로 설정하여, 큐에 삽입
        distance[start] = 0;
        while(!pq.isEmpty()) {           
            Node node = pq.poll(); // 가장 최단 거리가 짧은 노드에 대한 정보 꺼내기
            int dist = node.getDistance(); // 현재 노드까지의 비용
            int now = node.getIndex(); // 현재 노드            
            if (distance[now] < dist) continue; // 기록된 인접 노드까지의 비용이 현재 노드까지의 비용보다 짧다: 무시
            for (int i = 0; i < graph.get(now).size(); i++) { // 현재 노드와 연결된 다른 인접한 노드들을 확인
                int cost = distance[now] + graph.get(now).get(i).getDistance(); // 현재 노드의 거리값+인접노드의 거리값
                // 현재 노드를 거쳐서, 다른 노드로 이동하는 거리가 더 짧은 경우
                if (cost < distance[graph.get(now).get(i).getIndex()]) {
                    distance[graph.get(now).get(i).getIndex()] = cost; // 최단경로 갱신해줌
                    pq.offer(new Node(graph.get(now).get(i).getIndex(), cost)); // 우선순위큐에 삽입
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        V = sc.nextInt();
        E = sc.nextInt();
        start = sc.nextInt();

        // 그래프 초기화
        for (int i = 0; i <= V; i++) {
            graph.add(new ArrayList<Node>()); // 연결된 인접 노드의 정보를 담기 위해서 매번 arraylist 인스턴스를 이용해 초기화
        }

        // 모든 간선 정보를 입력받기
        for (int i = 0; i < E; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();
            int w = sc.nextInt();
            // u번 노드에서 v번 노드로 가는 비용이 w
            graph.get(u).add(new Node(v, w));
        }

        // 최단 거리 테이블을 모두 무한으로 초기화
        Arrays.fill(distance, INF);

        // 다익스트라 알고리즘을 수행
        dijkstra(start);

        for (int i = 1; i <= V; i++) {
            if (distance[i] == INF) {
                System.out.println("INF");
            } else {
                System.out.println(distance[i]);
            }
        }
    }
}