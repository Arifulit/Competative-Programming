#include<bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;



 int  main(){
 Fast
 ll n,t=1;
 
 ll l,r,k;
 cin >> t;
for(n = 1; n <= t; n++)

    cin>>l>>r>>k;
    if(k==0){
        if(l!=1 && l==r){
            cout<<"YES"<<endl;}
        else {
            cout<<"NO"<<endl;
            }

        

    }
    ll req=(r-l+1)/2;
    if(l%2==1 && r%2==1){
        req++;
    }

    if(req<=k){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

 return 0;
}