#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
       cin>>a[i];
    }
    sort(a,a+n);
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        if(sum+1<a[i])
        break;
        sum+=a[i];
    }
    cout<<sum+1;
    
}