#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int l=1,r=1e9;
    set<int>la;
    for(int i=0;i<n;i++){
      int a,x;
      cin>>a>>x;
      if(a==1){
        l=max(l,x);
      }
      else if(a==2){
        r=min(r,x);
      }
      else{
        la.insert(x);
      }
    }
    if(r<l){
      cout<<0<<endl;
      continue;
    }

    int ans=0;
    for(auto i:la){
      ans-=(i>=l and i<=r);
        }
    cout<<ans<<endl;

  }
  return 0;
}