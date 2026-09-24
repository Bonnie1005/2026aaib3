// week03-2.cpp
// 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0; // (統計)有幾個負數
        for (int num : nums){
            if (num<0) neg++;
            if (num==0) return 0;
        }
        if (neg%2==0) return 1;
        else return -1;
    }
};
