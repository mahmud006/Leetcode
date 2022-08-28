class Solution {
public:
    int sieve(int n){
        vector<int> vis(n+1, 0);
        int cnt = 0;
        for(int i=2; i*i<=n; i++){
            if(vis[i]==0){
                for(int j=i+i; j<n; j+=i){                    
                    if(vis[j]==0){
                        vis[j] = 1;
                        cnt++;
                    }
                }
            }
        }
        // for(int i=2; i<n; i++){
        //     //cout << 
        //     if(vis[i]==0) cnt++;
        // }
        return n<2?0:(n-1)-(cnt+1);
    }
    int countPrimes(int n) {
        return sieve(n);
    }
};