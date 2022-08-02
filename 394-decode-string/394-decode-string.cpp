class Solution {
public:
    string decodeString(string s) {
        string ans;
        stack<pair<int,string>> stk;
        int currNum = 0;
        for(char &ch:s){
            if(isdigit(ch)){
                currNum = currNum*10 + (ch-'0');
            }
            else if(ch == '['){
                stk.push({currNum,ans});
                //cout << stk.top().first << " " << stk.top().second <<endl;
                currNum = 0;
                ans = "";
            }
            else if(ch == ']'){
                int cnt = stk.top().first;
                string temp;
                while(cnt--)
                    temp += ans;
                ans = stk.top().second + temp;
                //cout << ans << endl;
                stk.pop();
                
            }
            else{
                ans += ch;
            }
        }
        return ans;
    }
};