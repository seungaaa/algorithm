/*
 파일명 정렬
 https://programmers.co.kr/learn/courses/30/lessons/17686
 */

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const string& a, const string& b) {
    string a_HEAD = "";
    int a_index = 0;
    while (a_index < a.length()) {
        if (isdigit(a[a_index]))
            break;
        else {
            a_HEAD += tolower(a[a_index]);
            a_index++;
        }
    }
    string b_HEAD = "";
    int b_index = 0;
    while (b_index < b.length()) {
        if (isdigit(b[b_index]))
            break;
        else {
            b_HEAD += tolower(b[b_index]);
            b_index++;
        }
    }

    if (a_HEAD != b_HEAD)
        return a_HEAD < b_HEAD;

    string a_NUMBER = "";
    for (int i = 0; i < 5 && a_index < a.length(); i++) {
        if (isdigit(a[a_index])) {
            a_NUMBER += a[a_index];
            a_index++;
        }
        else break;
    }
    string b_NUMBER = "";
    for (int i = 0; i < 5 && b_index < b.length(); i++) {
        if (isdigit(b[b_index])) {
            b_NUMBER += b[b_index];
            b_index++;
        }
        else break;
    }
    int a_num = stoi(a_NUMBER);
    int b_num = stoi(b_NUMBER);
    if (a_num != b_num)
        return a_num < b_num;
}

vector<string> solution(vector<string> files) {
    vector<string> answer = files;
    stable_sort(answer.begin(), answer.end(), cmp);
    return answer;
}
