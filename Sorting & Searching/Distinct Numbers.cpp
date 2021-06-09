#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n,flag=0,count=1;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        flag=0;
        if(a[i]==a[i+1])
        {
            flag=1;
        }
        if(flag==0)
        count++;
    }
    cout<<count;
}