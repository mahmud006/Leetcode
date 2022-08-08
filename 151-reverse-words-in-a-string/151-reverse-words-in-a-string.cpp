class Solution {
public:
    string reverseWords(string s) {
        stack<string>stk;
        string ans;
        for(int i=0; i<s.size(); i++){
            string word = "";
            if(s[i]==' '){
                continue;
            }
            while(s[i]!=' ' && i<s.size()){
                word += s[i];
                i++;
            }
            stk.push(word);
        }
        while(!stk.empty()){
            ans += stk.top();
            stk.pop();
            if(!stk.empty()){
                ans += " ";
            }
        }
        return ans;
    }
};