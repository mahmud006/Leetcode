class Solution {
public:
    double modularExpo(double x, long long n){
        if(n==0) return 1.0;
        if(n%2==0){
            auto temp = modularExpo(x, n/2);
            return (temp*temp);
        }
        return x*modularExpo(x, n-1);
    }
    double myPow(double x, int n) {
        bool flag = n<0;
        if(n==0) return 1.0;
        long long bn = n<0 ? 1LL*(-1)*n:n;
        double res = modularExpo(x, bn);
        res = flag?1.0/res:res;
        return res;
    }
};