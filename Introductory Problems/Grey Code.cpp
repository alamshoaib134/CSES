#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<(1<<n);i++)
    {
        ll val = (i^(i>>1));
        bitset<16> r(val);
        string s = r.to_string();
        cout<<s.substr(16-n)<<endl;
    }
}