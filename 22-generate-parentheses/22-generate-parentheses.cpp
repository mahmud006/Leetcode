class Solution {
public:
    vector<string> res;
    void generate(string curr, int open, int close){
        if(open==close && open==0){
            res.push_back(curr);
            return;
        }
        if(open > 0) generate(curr + "(", open-1, close);
        if(open < close) generate(curr + ")", open, close-1);
    }
    vector<string> generateParenthesis(int n) {
        res.clear();
        generate("", n, n);
        return res;
    }
};