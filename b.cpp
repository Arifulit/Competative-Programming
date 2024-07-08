#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        unordered_map<long long,long long>mp;

        long long ans=0;

        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                mp[a[i]]+=i;
                ans+=mp[a[i]];
            }
        }

        cout<<ans<<endl;
    }
}