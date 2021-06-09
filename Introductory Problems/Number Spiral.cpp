#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
 {
    ll n;
    cin>>n;
    while(n--)
    {
        ll y,x;
        cin>>y>>x;
        if(y%2==0 && y>=x)
        {
           cout<<y*y-x+1; 
        }
        else if(x%2==1 && x>=y)
        {
            cout<<x*x-y+1;
        }
        else if(x%2==0 && x>y)
        {
            cout<<(x-1)*(x-1)+y;
        }
        else if(y%2==1 && y>x)
        {
            cout<<(y-1)*(y-1)+x;
        }
        cout<<endl;
    }
     
 }