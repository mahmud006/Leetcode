class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        int flg = 1, chk;
        for(int i=n; i>=0; i--){
            chk = digits[i]+flg;
            if(chk>9){
                digits[i] = 0;
                flg = 1;
            }
            else{
                digits[i] = chk;
                flg = 0;
            }
        }
        if(flg>0) digits.insert(digits.begin(), flg);
        return digits;
    }
};