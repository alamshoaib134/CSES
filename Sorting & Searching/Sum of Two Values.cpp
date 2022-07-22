#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,x;
    cin>>n>>x;
    std::vector<int> a(n);
    std::map<int, int>vals ;
    for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if(vals.count(x - a[i])){
			cout << i + 1 << " " << vals[x - a[i]] << "\n";
			return 0;
		}
		vals[a[i]] = i + 1;
	}
	cout << "IMPOSSIBLE" << '\n';
    
}