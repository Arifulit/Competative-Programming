#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
    int t;
    cin>>t;
      while(t--){
        ll n;
        cin>>n;
        vector<ll>v;

        map<ll,ll>mp;

        for(int i=0;i<v.size();i++){
            cin>>v[i];
        }

        for(int i=0; i<v.size(); i++){
            int a;
            cin>>a;
            mp[v[i]]=a;
        }

        sort(v.begin(),v.end());

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }

        cout<<endl;

        for(int i=0; v.size(); i++){
            cout<<mp[v[i]]<<" ";
        }
        cout<<endl;
    }
    return 0;

}