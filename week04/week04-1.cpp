// week04-1.cpp
// LeetCode 283. Move Zeroes
// 就是把綠色的數字,移到左邊,題目會自己檢查 nums 陣列
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
            int k =0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] != 0){
                    nums[k] = nums[i];
                    k++;
                }
            }// 移動完後,右邊會有殘留的0
            for(int i=k; i<nums.size(); i++){
                nums[i] = 0;
            }

    }
};
