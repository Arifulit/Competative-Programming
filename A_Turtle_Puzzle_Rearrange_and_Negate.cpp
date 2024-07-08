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
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}

int mxsum=0,currntsum=0;
for(int i=0;i<n;i++){
    currntsum+=abs(a[i]);
    mxsum=max(mxsum,currntsum);

    
}
cout<<mxsum<<endl;


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