class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0, flg=0;
        for(int i=s.size()-1; i>=0; i--){
            if(flg>0 && s[i]==' '){
                break;
            }
            if(s[i]!=' '){
                cnt++;
                flg++;
            }
        }
        return cnt;
    }
};