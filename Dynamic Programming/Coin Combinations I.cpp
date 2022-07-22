#include<bits/stdc++.h>

const int MOD = (int) 1e9 + 7;
using namespace std;





int main()
{
    int n;cin>>n;
    int x;cin>>x;
    int coins[x+1];
    for(int i=0;i<n;i++)
        cin>>coins[i];
    int dp[x+1];
    dp[0]=1;
    
    for(int i=1;i<=x;i++)
    {
        dp[i]=0;
        for(int j=0;j<n;j++)
        {
           if(coins[j]<=i)
                dp[i] = (dp[i] + dp[i-coins[j]])%MOD; 
        }
    }
    cout<<dp[x];
}