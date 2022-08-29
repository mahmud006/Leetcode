class Solution {
public:
    int trailingZeroes(int n) {
        int c5 = 0, d = 5;
        while(n>=d){
            c5 += n/d;
            d *= 5;
        }
        return c5;
    }
};