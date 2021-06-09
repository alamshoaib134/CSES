#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
 {
   ll n,xtra;
   
   cin>>n;
   
   if(n%4==3 || n%4==0)
   {
       cout<<"YES"<<endl;
      if(n%2==0)
      {
          cout<<n/2<<endl;
          for(ll i = 1; i<=n/2;i+=2 )
          {
            cout<<i<<" "<<n-i+1<<" "; 
          }
          cout<<endl<<n/2<<endl;
          for(ll i = 2; i<=n/2;i+=2 )
          {
            cout<<i<<" "<<n-i+1<<" "; 
          }
          
      }
      else
      {
          cout<<n/2+1<<endl;
          for(ll i = 1;i<=n/2;i+=2)
          {
              if(n-i+1 - i != n/2+1)
             cout<<i<<" "<<n-i+1<<" ";
             else{
             cout<<i<<" ";
             xtra = n-i+1;
                 
             }
          }
          cout<<n/2+1;
          cout<<endl<<n/2<<endl;
          for(ll i=2;i<=n/2;i+=2)
          {
             cout<<i<<" "<<n-i+1<<" ";   
          }
          cout<<xtra;
      }
   }
   else
   cout<<"NO"<<endl;
 }