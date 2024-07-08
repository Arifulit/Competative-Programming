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
 string s;cin>>s;
 bool ok = false;

 for(int i=1;i<(int)(s.length());i++){
    if(s[i]!=s[0]){
        swap(s[i],s[0]);
        ok = true;
        break;
    }
 }

 if(!ok){
    cout<<"NO"<<endl;
    return;
 }
 cout<<"YES"<<endl;
 cout<<s<<endl;
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