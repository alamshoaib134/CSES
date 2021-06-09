#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     string s;
     int count=1,max=1;
     cin>>s;
     //sort(s.begin(),s.end());
     for(int i=0;i<s.length()-1;i++)
     {
         if(s[i]==s[i+1])
         {
             count++;
         }
         else
         {
            if(max<count)
            max=count;
            count=1;   
         }
     }
     if(max<count)
            max=count;
     cout<<max;
     
 }