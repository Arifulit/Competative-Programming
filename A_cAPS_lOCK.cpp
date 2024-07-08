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
    int n,i,j,k=0;
string s;
cin>>s;
  for(int i=1; i< s.size(); i++){
         if(s[i]==(char)tolower(s[i])){
            k=1;
         }
  }

  if(k==1){
    cout<<s;
  }
  else{
    for(i=0; i<s.size();i++){
        if(s[i]==(char)tolower(s[i])){
            cout<<(char)toupper(s[i]);
        }
        else{
            cout<<(char)tolower(s[i]);
        }
    }
  }

}

 int  main(){
 Fast
 ll n,t=1;
 //cin >> t;
for(n = 1; n <= t; n++)

{
    solve();
 }
 return 0;
}