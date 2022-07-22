#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n; cin>>n;
    ll l=1;
    ll ind[n+1]={0};
    for(ll i=1;i<n+1;i++)
    {
        ll y;cin>>y;
        ind[y]=i;
    }
    ll c=1;
    for(ll i=1;i<=n;i++){
        if(l > ind[i])
            c++;
        l = ind[i];}
    cout<<c;
}