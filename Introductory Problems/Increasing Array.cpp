#include<bits/stdc++.h>

using namespace std;
 int main()
 {
     typedef long long ll;
    ll n;
    cin>>n;
    ll diff=0;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   for(int i=0;i<n-1;i++)
   {
       if(a[i]>a[i+1])
       {
           diff = diff + a[i]-a[i+1];
           a[i+1]=a[i];
       }
   }
   cout<<diff;
    
 }