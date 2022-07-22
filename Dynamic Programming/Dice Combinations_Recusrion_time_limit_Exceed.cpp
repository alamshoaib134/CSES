#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

ll dp(ll n)
{
    if(n==1 || n==0)
    return 1;
    if(n<0)
    return 0;
    return dp(n-1)+dp(n-2)+dp(n-3)+dp(n-4)+dp(n-5)+dp(n-6);
}

int main()
{
    ll n;
    cin>>n;
    ll ret = dp(n);
    cout<<ret%1000000007;
}