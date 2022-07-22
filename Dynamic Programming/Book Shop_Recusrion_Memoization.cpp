#include <bits/stdc++.h>

using namespace std;

int t[1001][100001];


// int knapsack(int price[], int page[], int amount, int n)
// {
//     for(int i=0;i<n+1;i++)
//         for(int j=0;i<amount+1;j++)
//             if(i==0||j==0)
//             t[i][j]=0;
    
//     for(int i=1;i<n+1;i++)
//         for(int j=1;j<=amount+1;j++)
//         {
//             if(price[i-1]<=j)
//                 t[i][j] = max(page[i-1]+t[i-1][j-price[i-1]],t[i-1][j]);
//             else
//                 t[i][j]=t[i-1][j];
//         }
//     return t[n][amount];
// }

int main()
{
    int n;
    int amount;
    cin>>n>>amount;
    int price[1000];
    int page[10000];
    for(int i=0;i<n;i++)
        cin>>price[i];
    for(int i=0;i<n;i++)
        cin>>page[i];
        
    //  for(int i=0;i<n+1;i++)
    //     for(int j=0;i<amount+1;j++)
    //         if(i==0||j==0)
    //             t[i][j]=0;
    
    for(int i=0;i<n+1;i++)
        for(int j=0;j<=amount+1;j++)
        {
             if(i==0||j==0)
                t[i][j]=0;
            
            else if(price[i-1]<=j)
                t[i][j] = max(page[i-1]+t[i-1][j-price[i-1]],t[i-1][j]);
            else
                t[i][j]=t[i-1][j];
        }
    
    cout<<t[n][amount];
    
    
} 