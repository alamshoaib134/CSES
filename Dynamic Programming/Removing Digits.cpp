#include<bits/stdc++.h>
using namespace std;

int dp[1000001];

int main()
{
    int n;
    cin>>n;
    dp[0]=0;
    
    for(int i=1;i<=n;i++)
    {
        set<int>s ;
        for (auto j: to_string(i)){
            s.insert(j-'0');
        }
        dp[i]=INT_MAX-1;
        for (auto j: s){
            dp[i] = min(dp[i],dp[i-j]+1);
        }
    }
    cout<<dp[n];
    
}