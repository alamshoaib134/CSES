#include <bits/stdc++.h>

using namespace std;

int t[1001][100001];


int knapsack(int price[], int page[], int amount, int n)
{
    if(n==0||amount==0)
    return 0;
    if(t[n][amount]!=-1)
    return t[n][amount];
    if(price[n-1]<=amount)
    return t[n][amount]= max(page[n-1]+knapsack(price,page,amount-price[n-1], n-1),
    knapsack(price,page,amount, n-1));
    else 
    return t[n][amount]= knapsack(price,page,amount, n-1);
}

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
    memset(t,-1,sizeof(t));
    cout<<knapsack(price,page,amount,n);
    
    
} 