class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cnt = 0, idx = 0;
        for(int i=0; i<s.size(); i++){
            for(int j=idx; j<t.size(); j++){
                if(s[i]==t[j]){
                    cnt++;
                    idx = j+1;
                    break;
                }
            }
        }
        return cnt==s.size();
    }
};