#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    std::vector<int>a(n) ;
    for(auto &it:a)
    cin>>it;
    
    sort(a.begin(),a.end());
    
    vector<bool> curr(100001,false);
    curr[0]=true;
    curr[a[0]]=true;
    
    for(int i=1;i<n;i++)
    {
        vector<bool>tmp = curr;
        int coin= a[i];
        for(int j=0;j<100001;j++)
        {
            curr[j]=tmp[j];
            if(j-coin>=0)
                curr[j]=curr[j]|tmp[j-coin];
        }
        
    }
    vector<int> ans;
    for(int i=1;i<100001;i++)
    {
        if(curr[i])
        ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)
    cout<<i<<" ";
    
    
    
} 