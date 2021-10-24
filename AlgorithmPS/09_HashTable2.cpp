/*
 Longest Substring Without Repeating Characters
 https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int answer = 0;
        unordered_map<char, int> charMap;
        for (int i = 0, j = 0; i < s.size(); ++i) {
            if (charMap.count(s[i]))
                j = max(j, charMap[s[i]]+1);
            answer = max(answer, i-j+1);
            charMap[s[i]] = i;
        }
        return answer;
    }
};
