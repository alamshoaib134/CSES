#include <bits/stdc++.h>

using namespace std;

int knapsack(int price[], int page[], int amount, int n)
{
    if(n==0||amount==0)
    return 0;
    if(price[n-1]<=amount)
    return max(page[n-1]+knapsack(price,page,amount-price[n-1], n-1),
    knapsack(price,page,amount, n-1));
    else 
    return knapsack(price,page,amount, n-1);
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
    
    cout<<knapsack(price,page,amount,n);
    
    
} 