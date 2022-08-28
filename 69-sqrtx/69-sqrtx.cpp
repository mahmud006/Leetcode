class Solution {
public:
    int mySqrt(int x) {
        long long L = 0, R = x;
        while(L<R){
            long long mid = L + (R-L+1)/2;
            if(mid*mid==x){
                return mid;
            }
            if(mid*mid<x){
                L = mid;
            }
            else{
                R = mid - 1;
            }
        }
        return R;
    }
};