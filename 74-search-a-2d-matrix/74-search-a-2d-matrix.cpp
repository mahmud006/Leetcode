class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int L = 0, R = matrix[0].size()*matrix.size()-1, mid;
        while(L<=R){
            mid = L + (R-L+1)/2;
            int r = mid/matrix[0].size();
            int c = mid%matrix[0].size();
            if(matrix[r][c]==target){
                return true;
            }
            if(matrix[r][c]>target){
                R = mid - 1;
            }
            else{
                L = mid + 1;
            }
        }
        return false;
    }
};