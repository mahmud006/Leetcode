class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>stk;
        stk.push(num[0]);
        for(int i=1; i<num.size(); i++){
            while(k>0 && !stk.empty() && stk.top()>num[i]){
                stk.pop();
                k--;
            }
            stk.push(num[i]);
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