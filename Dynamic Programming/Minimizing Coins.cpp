#include<bits/stdc++.h>


using namespace std;

int t[101][1000001]={0};

// void print(int n, int x)
// {
//     for(int i=0;i<=n;i++)
//     {
//         for(int j=0;j<=x;j++)
//         {
//             cout<<t[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

int main()
{
    int n;cin>>n;
    int x;cin>>x;
    int coins[1000001];
    for(int i=0;i<n;i++)
        cin>>coins[i];
        
        
    for(int i=0;i<=n;i++)
        for(int j=0;j<=x;j++)
        {    if(j==0)
                t[i][j]=0;
            if(i==0)
                t[i][j]=INT_MAX-1;}
    for(int j=1;j<=x;j++)
    {
        if(j%coins[0]==0)
            t[1][j] = j/coins[0];
        else
            t[1][j] = INT_MAX-1;
        
    }
            
        
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=x;j++)
        {
                
                if(coins[i-1]<=j)
                    t[i][j] = min(t[i][j-coins[i-1]]+1,t[i-1][j]);
                else
                    t[i][j] = t[i-1][j];
                
        }
    }
//   print(n,x);
    cout<<(t[n][x] == INT_MAX-1 ? -1 : t[n][x]);
    // cout<<INT_MAX-1;
    
    
    
}