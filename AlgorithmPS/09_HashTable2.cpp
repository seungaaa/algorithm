/*
 Longest Substring Without Repeating Characters
 https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int answer = 0;
        map<char, int> charMap;
        int start = -1;
        for (int i = 0; i < s.size(); i++) {
            if (charMap.count(s[i]) != 0) {
                start = max(start, charMap[s[i]]);
            }
            charMap[s[i]] = i;
            answer = max(answer, i-start);
        }
        return answer;
    }
};
