#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int x,n;
    cin>>x>>n;
    set<int> position;
    multiset<int> lengths;
    position.insert(0);
    position.insert(x);
    lengths.insert(x-0);
    for(ll i=0;i<n;i++)
    {
        int added;
        cin>>added;
        position.insert(added);
        auto iter = position.find(added);
        int preVal = *prev(iter);
        int nxtVal = *next(iter);
        lengths.erase(lengths.find(nxtVal-preVal));
        lengths.insert(added-preVal);
        lengths.insert(nxtVal-added);
        cout<<*lengths.rbegin()<<" ";
        
    }
}

