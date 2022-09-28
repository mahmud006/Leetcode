class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;
        for(int i = 0; i<grid.size(); i++){
            int L = 0, R = grid[i].size() - 1, mid;
            while(L<=R){
                mid = L + (R-L)/2;
                if(grid[i][mid] >= 0){
                    L = mid + 1;
                }
                else{
                    R = mid - 1;
                }
            }
            cout << L <<endl;
            cnt += grid[i].size() - L;
        }
        return cnt;
    }
};