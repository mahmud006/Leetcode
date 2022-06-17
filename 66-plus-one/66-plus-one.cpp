class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sz = digits.size()-1;
        int flg = 1;
        for(int i=sz; i>=0; i--){
            int chk = digits[i]+flg;
            if(chk>9){
                digits[i] = chk%10;
                flg = chk/10;
            }
            else{
                digits[i] = chk;
                flg=0;
            }
        }
        if(flg>0){
            digits.insert(digits.begin(), flg);
        }
        return digits;
    }
};