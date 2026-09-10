// week01-3.cpp 學習計畫 Basic 第3題
// LeetCode 28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        // 找到字串的長度 .length()函式
        int N1 = haystack.length(), N2 = needle.length();
        for (int i=0; i<=N1-N2; i++){
            if ( haystack.substr(i, N2) == needle) return i;
            // 字串的小字母 .substr(i開始,長度) vs. needle 相同,找到答案
        }
        return -1;
    }
};
