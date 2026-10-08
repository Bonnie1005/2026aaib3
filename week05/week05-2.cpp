// week05-2.cpp
class Solution {
public:
    string toLowerCase(string s) {
        for (int i=0; i< s.length(); i++){
            if ( isupper(s[i]) ) s[i] = s[i] - 'A' + 'a';
        } // s[0] = 'h'; // 先試試看吧(看起來就是錯的)
        return s; // 竟然直接送出去
    }
};
