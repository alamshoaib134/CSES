#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
 {
   ll n;
   cin>>n;
   for(ll i=1;i<=n;i++)
   {
       cout<<(i*i)*(i*i-1)/2 - 4*(i-1)*(i-2)<<endl; 
   }
     
 }