// week02-4.cpp 厩策璸礶 Basic 材2肈
// LeetCode 389.
class Solution {
public:
    char findTheDifference(string s, string t) {
        int U[26] = {}; //Τ26戈方Μ表,柑常琌0
        for (char c : s ){
            U[c - 'a'] ++;
        }
        for (char c : t ){
            U[c - 'a'] --;
            if (U[c-'a'] < 0) return c;
        }
        return 0;
    }
};
