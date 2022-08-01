class Solution {
public:
    long long getNCR(int n, int r){
        long long res = 1;
        int gap = min(r, n-r), down = 1;
        while(gap--){
            res *= n--;
            res /=down++;
        }
        return res;
    }
    int uniquePaths(int m, int n) {
        return getNCR(n+m-2, m-1);
    }
};