#include <bits/stdc++.h>
#define uli unsigned  long int 
using namespace std;
int main() {

    uli n,count=0;
    cin>>n;
    for(uli i=5;(n/i)>0;i = i*5)
    {
        count = count + n/i;
    }
    cout<<count;
    
    return 0;
    
    
}