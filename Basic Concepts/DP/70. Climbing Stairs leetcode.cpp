
#include<bits/stdc++.h>
using namespace std;

 int countstep(int n, int dp[])
    {
        if(n<=1)
        {dp[n]=n;
        cout<<"n"<<n<<" "<<dp[n]<<endl;
         return n;}

        if(dp[n]!=0)
            return dp[n];
        dp[n] = countstep(n-1, dp) + countstep(n-2, dp);
        return dp[n];
    }
    int main() {
        int n=5;
        int dp[n+2];
        memset(dp, 0, n+2);
        cout<<countstep(n+1, dp)<<endl;

    }
