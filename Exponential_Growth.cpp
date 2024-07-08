#include<bits/stdc++.h>
using namespace std;
//const int  MOD 1e9+7;
typedef long long ll;

#define MOD 1000000007




ll power(ll x,ll n){
    ll result=1;
    while(n>0){
        if(n%2==1){
            result=(result*x)%MOD;
        }
        x=(x*x)%MOD;
        n/=2;
    }
    return result;

}

int main(){
    int x,n;
   cin>>x>>n;
   ll result=power(x,n);
   cout<<result<<endl;

}