/*
 구명보트
 https://programmers.co.kr/learn/courses/30/lessons/42885
 */

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end(), greater<>());
    vector<int> smallest = {people.rbegin(), people.rend()};

    int j = 0;
    for (int i = 0; i < people.size(); i++) {
        if (people[i] + smallest[j] <= limit) {
            people.pop_back();
            j++;
        }
        smallest.pop_back();
        answer++;
    }
    return answer;
}
