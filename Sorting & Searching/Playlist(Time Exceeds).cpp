#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,j=0;cin>>n;
    ll a[n],ans=0;
    unordered_map<ll,ll> index;
    for(ll i=0;i<n;i++){
    cin>>a[i];
    
    
      j = max(index[a[i]],j);
        ans = max(ans,i-j+1);
        index[a[i]]=i+1;
    }
    cout<<ans;
    
    
   
    
}