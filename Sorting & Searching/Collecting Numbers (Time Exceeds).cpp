#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll count=0;
    for(ll j=1;j<n+1;j++)
    {
        for(ll i=0;i<n;i++)
        {
            if(j==a[i])
            {
                j++;
            }
        }
        count++;
    }
    cout<<count;
    
    
}