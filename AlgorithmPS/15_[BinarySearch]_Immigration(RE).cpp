/*
 입국심사
 https://programmers.co.kr/learn/courses/30/lessons/43238
 */

#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times) {
    unsigned long long answer = 0;
    
    sort(times.begin(), times.end());
    unsigned long long min = 1;
    unsigned long long max = times[0] * n;
    
    while (min <= max) {
        unsigned long long mid = (min + max) / 2;
        unsigned long long cnt = 0;
        
        for (int i = 0; i < times.size(); i++)
            cnt += mid / times[i];
        
        if (cnt >= n) {
            answer = mid;
            max = mid - 1;
        }
        else
            min = mid + 1;
    }
    return answer;
}
