#include<bits/stdc++.h>
using namespace std;

const int  MOD =1e9;
#define ll long long


void solve(){

    ll n,k;
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        cout<<i<<" ";
    }
    
    ll i,j;
    i=k+2;



    while(i<=n){
        cout<<i<<" ";
        i+=2;
    }
    j=k+1;
    while(j<=n){
        cout<<j<<" ";
        j+=2;
    }
    cout<<endl;


}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}