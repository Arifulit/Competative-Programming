#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int n,k;
    cin>>n>>k;

    ll result,num=1;

    while(n-num*k>-1){
        if(!((n-(num*k))%num)){
            result=num;
        }
        num++;
    }
    cout<<result<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;

}