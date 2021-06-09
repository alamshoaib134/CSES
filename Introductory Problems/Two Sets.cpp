#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
 {
   ll n;
   cin>>n;
   vector<ll> arr1,arr2;
   ll total = n*(n+1)/2;
   if(total&1)
   cout<<"NO"<<endl;
   else
   {
       total/=2;
       while(n)
       {
           if(total-n>=0)
           {
               arr1.push_back(n);
               total= total-n;
           }
           else
           {
               arr2.push_back(n);
               
           }
           n--;
       }
       cout<<"YES"<<endl;
        cout << arr1.size() << endl;
        for (ll ele : arr1)
            cout << ele << " ";
        cout << endl;
        cout << arr2.size() << endl;
        for (ll ele : arr2)
            cout << ele << " ";
   }
   
   
 }