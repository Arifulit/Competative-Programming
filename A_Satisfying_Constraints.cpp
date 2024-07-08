#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;

  while(t--){


    int n;cin>>n;

    int mn =-1,mx=INT_MAX;

    vector<int>c;

    for(int a,x,i=0;i<n;i++){
      cin>>a>>x;

      if(a==1)mn=max(mn,x);
      else if(a==2)mx=min(mx,x);

      else c.push_back(x);


    }
    int ans=mx-mn+1;

    for(auto i:c){
      if(i>=mn && i<=mx)ans--;
    }
    cout<<max(ans,0)<<endl;

  }
  
  return 0;
}