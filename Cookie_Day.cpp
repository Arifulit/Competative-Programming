#include<bits/stdc++.h>
using namespace std;

const int  MOD =1e9;

 void solve(){
    int n,m;
    cin>>n>>m;
   
    vector<int>nums;

    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }

    int ans=MOD;
      int flag=0;

      for(auto a:nums){
        if(a>=m){
            flag=1;
            ans=min(ans,a%m);
        }

      } 
      if(flag==0)cout<<"-1"<<endl;
      else cout<<ans<<endl;
 }
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}