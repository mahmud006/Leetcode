class Solution {
public:
    double average(vector<int>& salary) {
        double avg, sum = 0;
        int mx = 0, mn = INT_MAX;
        for(int i=0; i<salary.size(); i++){
            mx = max(salary[i], mx);
            mn = min(salary[i], mn);
            sum += salary[i];
        }
        return (sum - (mx + mn))/(salary.size()-2);
    }
};