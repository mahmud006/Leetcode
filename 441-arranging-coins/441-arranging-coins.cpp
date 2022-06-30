class Solution {
public:
    int arrangeCoins(int n) {
        long long i = 1;
        long long s = 0, cnt=0;
        while(s<=n){
            s += i;
            if(s>n) break;
            cnt++;
            i++;
        }
        return cnt;
    }
};