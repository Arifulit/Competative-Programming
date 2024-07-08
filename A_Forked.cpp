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
 int a,b,k1,k2,q1,q2;
    cin>>a>>b>>k1>>k2>>q1>>q2;
    set<pair<int,int>>s_k,s_q;
    int dx[8]={-a,-a,a,a,-b,b,-b,b};
    int dy[8]={-b,b,-b,b,-a,-a,a,a};
    for(int i=0;i<8;i++){
        s_k.insert({k1+dx[i],k2+dy[i]});
    }
    for(int i=0;i<8;i++){
        s_q.insert({q1+dx[i],q2+dy[i]});
    }
    int siu=0;
    for(auto i:s_k){
        if(s_q.find(i)!=s_q.end()){
            siu++;
        }
    }
    cout<<siu<<endl;

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