#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n,m,diff;
    cin>>n>>m>>diff;
    ll applicant[n], apart[m];
    for(ll i=0; i<n;i++)
    cin>>applicant[i];
    for(ll i=0; i<m;i++)
    cin>>apart[i];
    sort(applicant,applicant+n);
    sort(apart,apart+m);
    ll i=0,j=0,count=0;
    while(i<n && j<m)
    {
        if(abs(applicant[i]-apart[j])<=diff)
        {
            count++;
            i++;
            j++;
        }
        else if(applicant[i]>apart[j])
        j++;
        else 
        i++;
        
    }
    cout<<count;
    
}