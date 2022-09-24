class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cnt = 0, idx = 0;
        for(int i=0; i<t.size() && idx<s.size(); i++){
            if(s[idx]==t[i]){
                idx++;
            }
        }
        return idx==s.size();
    }
};