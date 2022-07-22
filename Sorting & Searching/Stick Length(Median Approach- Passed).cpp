#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,j,sum=0;
    cin>>n;
    std::vector<int>a ;
    for(ll i=0;i<n;i++)
    {
        cin>>j;
        a.push_back(j);
    }
    sort(a.begin(),a.end());
    ll med = a[n/2];
    ll diff=0;
    for(ll i=0;i<n;i++)
    {
        diff+= abs(med-a[i]);
    }
    cout<<diff;
}