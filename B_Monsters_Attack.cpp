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
  int n,k;cin>>n>>k;
  vector<int>a(n),x(n);

  int l=-1,r=-1;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    cin>>x[i];
  }
  for(int i=0;i<n;i++){
    if(x[i]>0){
        r=i;
        l=i-1;
        break;
    }
  }
  int pos=true;
  int t=0,rem=0;
  while(l>=0 && r<=n-1){
    if((abs(x[l]-t)*k+rem)>=a[l]){
        if(a[l]<=(-x[l]-t)*k){
            rem+=(a[l]-t)*k-a[l];
        }
        else{
            rem-=a[l]+(-x[l]-t)*k;
        }
        t+=(-x[l]-t);
        l--;
    }
    else{
        pos=false;
        break;
    }
    else if(x[r]+t>abs(x[l]-t))
  }


}

 int   main(){
 Fast
 ll n,t;
 cin >> t;
while(t--)

{
    solve();
 }
 return 0;
}