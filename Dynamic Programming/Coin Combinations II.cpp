#include<bits/stdc++.h>

const int MOD = (int) 1e9 + 7;
using namespace std;

int t[101][1000001]={0};

void print(int n, int x)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=x;j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;cin>>n;
    int x;cin>>x;
    int coins[1000001];
    for(int i=0;i<n;i++)
        cin>>coins[i];
        
        
    for(int i=0;i<=n;i++)
        for(int j=0;j<=x;j++)
        {    if(i==0)
                t[i][j]=0; 
            if(j==0)
                t[i][j]=1;
           }
    
            
        
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=x;j++)
        {
                
                if(coins[i-1]<=j)
                    t[i][j] = (t[i][j-coins[i-1]]+t[i-1][j])%MOD;
                else
                    t[i][j] = (t[i-1][j])%MOD;
                
        }
    }
 //print(n,x);
    cout<<t[n][x];
    // cout<<INT_MAX-1;
    
    
    
}