class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int>mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        int cnt = 0, flg=0;
        for(auto i: mp){
            if(i.second % 2 == 0){
                cnt += i.second;
            }
            else{
                cnt += i.second - 1;
                flg++;   
            }
        }
        if(flg>0) cnt++;
        return cnt;
    }
};