#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    ll n;
    cin>>n;
    std::vector<pair<int, int>> vals ;
    while(n--)
    {
        ll in,out;

        cin>>in>>out;
        vals.push_back(make_pair(in,1));
        vals.push_back(make_pair(out,-1));
    }
    sort(vals.begin(),vals.end());
    ll sum =0, ans=0;
    for(auto x:vals)
    {
     sum = sum + x.second; 
     ans = max(ans,sum);
        
    }
    cout<<ans;
}