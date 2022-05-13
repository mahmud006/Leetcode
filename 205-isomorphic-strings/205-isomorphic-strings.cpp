class Solution {
public:
    int cnt = -1;
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]] && mp[s[i]] != t[i]){
                 return false;
            }
            mp[s[i]] = t[i];
        }
        cnt++;
        if(cnt==0) return isIsomorphic(t,s);
        return true;
    }
};