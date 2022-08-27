class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int L = 1, R = 1000000001, flg = 0;
        while(L<=R){
            double mid = L + (R-L)/2;
            double time = 0;
            for(int i=0; i<dist.size(); i++){
                time += i==dist.size()-1?(dist[i]/mid):ceil(dist[i]/mid);
            }
            //cout << time << endl;
            if(time>hour){
                L = mid + 1;
            }
            else{
                R = mid - 1;
            }
            if(time<=hour && time!=0){
                flg++;
            }
        }
        return flg==0?-1:L;
    }
};