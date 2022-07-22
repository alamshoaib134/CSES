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
        sum+=j;
    }
    ll res = sum/n;
    ll dif=0;
    for(int i=0;i<n;i++)
    {
        dif += abs(res-a[i]);
    }
    cout<<dif;
}