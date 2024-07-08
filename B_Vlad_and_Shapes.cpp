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
int cnt;
int a[n][n];
int r=n*n;
vector<int>c(n),d(n);

for(int i=1;i<=n;i++){

     cnt=0;
     for(int j=1;j<=n;j++){
        cin>>a[i][j];
        if(a[i][j]==1)cnt++;
       c.push_back(cnt);



    }
    

    

}


if(cnt==r)cout<<"SQUARE"<<endl;

else if()

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