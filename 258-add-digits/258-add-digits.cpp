class Solution {
public:
    int add(int n){
        if(n<10) return n;
        int sum = 0, chk;
        while(n>0){
            chk = n%10;
            n = n/10;
            sum += chk;
        }
        return add(sum);
    }
    int addDigits(int num) {
        return add(num);
    }
};