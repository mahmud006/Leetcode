class Solution {
public:
    int arrangeCoins(int n) {
        int L = 0, R = n;
        while(L<=R){
            int mid = L + (R-L)/2;
            long long sum = 1ll*mid*(mid+1)/2;
            if(sum==n) return mid;
            else if(sum>n){
                R = mid - 1;
            }
            else{
                L = mid + 1;
            }
        }
        return R;
    }
};