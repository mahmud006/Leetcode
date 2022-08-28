class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        double xN = x;
        int cnt = 20;
        while(cnt--){
            //newton raphson
            xN = ((xN*xN)+x)/(xN+xN);
        }
        return xN;
    }
};