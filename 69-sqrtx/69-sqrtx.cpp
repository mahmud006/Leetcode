class Solution {
public:
    int mySqrt(int x) {
        long long L = 0, R = x;
        while(L<R){
            long long mid = L + (R-L+1)/2;
            if(mid*mid>x){
                R = mid-1;
            }
            else{
                L = mid;
            }
        }
        return R;
    }
};