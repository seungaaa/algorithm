/*
 구명보트
 https://programmers.co.kr/learn/courses/30/lessons/42885
 */

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());
    for (int i = 0; i < people.size(); answer++) {
        if (people[i] + people.back() <= limit)
            i++;
        people.pop_back();
    }
    return answer;
}
