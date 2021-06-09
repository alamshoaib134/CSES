#include <bits/stdc++.h>

using namespace std;
int main() {

    unsigned  long int  n,sum=2;
    cin>>n;
    n--;
    while(n--)
    {
       sum = (sum<<1) % 1000000007;
    }
    cout<<sum;
    return 0;
    
    
}