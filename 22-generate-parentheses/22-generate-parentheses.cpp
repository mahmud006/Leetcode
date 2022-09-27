class Solution {
public:
    vector<string> res;
    void generate(string &curr, int open, int close){
        if(open==close && open==0){
            res.push_back(curr);
            return;
        }
        if(open > 0) {
            curr.push_back('(');
            generate(curr, open-1, close);
            curr.pop_back();
        }
        if(open < close) {
            curr.push_back(')');
            generate(curr, open, close-1);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        res.clear();
        string curr = "";
        generate(curr, n, n);
        return res;
    }
};