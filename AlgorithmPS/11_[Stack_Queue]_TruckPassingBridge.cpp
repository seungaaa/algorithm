/*
 다리를 지나는 트럭
 https://programmers.co.kr/learn/courses/30/lessons/42583
 */

#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int weight_sum = 0;
    int i = 0;
    queue<int> bridge;
    
    while (i < truck_weights.size()) {
        if (bridge.size() == bridge_length) {
            weight_sum -= bridge.front();
            bridge.pop();
        }
        
        if (weight_sum + truck_weights[i] <= weight) {
            bridge.push(truck_weights[i]);
            weight_sum += truck_weights[i];
            i++;
        }
        else
            bridge.push(0);
        
        if (i == truck_weights.size())
            answer += bridge_length;
        
        answer++;
    }
    return answer;
}
