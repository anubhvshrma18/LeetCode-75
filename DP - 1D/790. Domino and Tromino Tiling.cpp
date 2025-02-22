class Solution {
public:
    int numTilings(int n) {
        if(n==1 || n==2) return n;
        if(n==3) return 5;
        int md = 1e9 + 7;
        vector<int> dp(n+1,0);
        dp[1]=1,dp[2]=2,dp[3]=5;
        for(int i=4;i<=n;i++) {
            dp[i]=((2*dp[i-1])%md+dp[i-3]%md)%md;
        }
        
        return dp[n];
    }
};