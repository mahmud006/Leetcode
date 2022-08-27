class Solution {
public:
    string rmv(string &num, int k){
        int flg = 0;
        for(int i=0; i<num.size()-1; i++){
            if(num[i]>num[i+1] && k>0){
                num.erase(num.begin()+i);
                k--;
                if(i==0){
                    i--;
                }
                else{
                    i-=2;
                }
            }
        }
        //cout << num <<endl;
        while(k>0){
            num.erase(num.begin()+(num.size()-1));
            k--;
        }
        //cout << num <<endl;
        return num;
    }
    string removeKdigits(string num, int k) {
        rmv(num, k);
        while(num[0]=='0'){
            num.erase(num.begin());
        }
        return num==""? "0":num;
    }
};