class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++){
            int l = 0, r = matrix[i].size()-1, m;
            while(l<=r){
                m = l + (r-l)/2;
                if(matrix[i][m]==target){
                    return true;
                }
                if(matrix[i][m]>target){
                    r = m - 1;
                }
                else{
                    l = m + 1;
                }
            }
        }
        return false;
    }
};