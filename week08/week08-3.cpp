// week08-3.cpp
// LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        vector<int> ans;
        int left = 0, right = N-1, up = 0, down = M-1;
        while (ans.size() <N * M){

            int i, j;
            i = up;
            for (int j=left; j<=right; j++){
                ans.push_back( matrix[i][j] );
            }
            up++;

            j = right;
            for (int i=up; i<=down; i++){
                ans.push_back( matrix[i][j] );
            }
            right--;
            if (ans.size() == M * N) break;

            i = down;
            for (int j=right; j>=left; j--){
                ans.push_back( matrix[i][j] );
            }
            down--;

            j = left;
            for (int i=down; i>=up; i--){
                ans.push_back( matrix[i][j] );
            }
            left++;
        }
        return ans;
    }
};
