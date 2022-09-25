class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string mn = strs[0], mx = strs[0], res;
        for(int i=0; i<strs.size(); i++){
            mn = min(strs[i], mn);
            mx = max(strs[i], mx);
        }
        for(int i=0; i<mn.size(); i++){
            if(mn[i]==mx[i]){
                res += mn[i];
            }
            else{
                break;
            }
        }
        return res;
    }
};