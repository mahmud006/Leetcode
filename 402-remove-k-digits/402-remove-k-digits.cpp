class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>stk;
        for(auto &ch: num){
            while(k>0 && !stk.empty() && stk.top()>ch){
                stk.pop();
                k--;
            }
            stk.push(ch);
        }
        while(k>0 && !stk.empty()){
            stk.pop();
            k--;
        }
        
        string res;
        while(!stk.empty()){
            res.push_back(stk.top());
            stk.pop();
        }
        while(!res.empty() && res.back()=='0'){
            res.pop_back();
        }
        if(res.empty()) return "0";
        reverse(res.begin(), res.end());
        return res;
    }
};