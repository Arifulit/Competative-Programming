#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;cin>>t;
while(t--){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

   ll bf=0;
   vector<array<ll,3>>tp;

   for(int i=0;i<n-2;i++){
    tp.push_back({v[i],v[i+1],v[i+2]});

   }
   ll nmtp =tp.size();
   for(int i=0;i<nmtp;i++){
    for(int j=i+1;j<nmtp;j++){

        ll df=0;
        if(tp[i][0]!=tp[j][0])df++;
        if(tp[i][1]!=tp[j][1])df++;
        if(tp[i][2]!=tp[j][2])df++;

        if(df==1){
            bf++;
        }
        


    }
   }
}
return 0;
}