/*
  Use DP
  1.At every steps we can reach there from last step of ie.dp[i-1] or 2nd last steps ie. dp[i-2]
  T.C-O(n)
  S.C-O(n)
*/
int climbStairs(int n) {
        
        if(n==0)return 1;
        if(n==2 or n==3)return n;
        int dp[n+1];
        memset(dp,n+1,0);
        
        dp[0]=1;
        dp[1]=1;
    
        
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
