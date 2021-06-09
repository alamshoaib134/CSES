#include<bits/stdc++.h>
int flag=0;
using namespace std;
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }   
     cout<<endl;
}

void permute(int a[],int n)
{
    flag=0;
    for(int i=0;i<n-1;i++)
    {
        if((a[i]+1==a[i+1])||(a[i]==a[i+1]+1))
        {
            flag=1;
            return;
        }
    }
    if(flag==0)
    {
        display(a,n);
        _Exit(0);
    }
    return;
}

 int main()
 {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         a[i]=i+1;
     }
     //sort(a,a+n);
     permute(a,n);
     while(next_permutation(a,a+n))
     {
         permute(a,n);
     }
    if(flag==1)
    cout<<"NO SOLUTION";
     
     
     
 }