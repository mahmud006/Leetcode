class Solution {
public:
    int sieve(int n){
        if(n<2){
            return 0;
        }
        vector<bool> vis(n+1, false);
        int cntComposite = 0;
        for(int i=2; i*i<=n; i++){
            if(vis[i]==false){
                for(int j=i*i; j<n; j+=i){                    
                    if(vis[j]==false){
                        vis[j] = true;
                        cntComposite++;
                    }
                }
            }
        }
        return (n-1)-(cntComposite+1);
    }
    int countPrimes(int n) {
        return sieve(n);
    }
};