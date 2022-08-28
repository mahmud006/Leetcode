/**
 * // This is the Master's API interface.
 * // You should not implement it, or speculate about its implementation
 * class Master {
 *   public:
 *     int guess(string word);
 * };
 */
class Solution {
public:
    int calculateScore(string &ref, string &cand){
        int res = 0;
        for(int i=0; i<ref.size(); i++){
            res += ref[i] == cand[i];
        }
        return res;
    }
    void findSecretWord(vector<string>& words, Master& master) {
        while(words.size()>1){
            int rdx = rand() % words.size();
            string queryString = words[rdx];
            int score = master.guess(queryString);
            vector<string>newList;
            for(auto &wd: words){
                if(calculateScore(wd, queryString) == score){
                    newList.push_back(wd);
                }
            }
            words = newList;
        }
        master.guess(words[0]);
    }
};