#include<bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;

void solve()
{
 int n,k;
 cin>>n>>k;
 if(k==(4*n-2))cout<<2*n<<endl;
 else if(k==(4*n-3))cout<<2*n-1<<endl;
 else cout<<(k+1)/2<<endl;
}

 int  main(){
 Fast
 ll n,t=1;
 cin >> t;
for(n = 1; n <= t; n++)

{
    solve();
 }
 return 0;
}