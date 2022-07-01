class Solution {
public:
    bool isPerfectSquare(int num) {
        long long L = 0, R = num;
        while(L<=R){
            long long mid = L + (R-L)/2;
            if(mid*mid==num){
                return true;
            }
            else if(mid*mid>num){
                R = mid - 1;
            }
            else{
                L = mid + 1;
            }
        }
        return false;
    }
};