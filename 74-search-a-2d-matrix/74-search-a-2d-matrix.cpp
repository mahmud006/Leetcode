class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int L = 0, R = matrix.size()-1, mid;
        while(L<R){
            mid = L + (R-L+1)/2;
            if(matrix[mid][0]==target){
                return true;
            }
            if(matrix[mid][0]>target){
                R = mid - 1;
            }
            else{
                L = mid;
            }
        }
        cout << L << " " << R<<endl;
        int l = 0, r = matrix[L].size()-1, m;
        while(l<=r){
            m = l + (r-l)/2;
            //cout << matrix[L][m] << endl;
            if(matrix[L][m]==target){
                return true;
            }
            if(matrix[L][m]>target){
                r = m - 1;
            }
            else{
                l = m + 1;
            }
        }
        return false;
    }
};