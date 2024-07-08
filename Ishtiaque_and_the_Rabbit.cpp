 #include<bits/stdc++.h>
using namespace std;
#define M 1000003
#define ll long long
 
 int main(){
    ll n=2;
   // cin>>n;
    while(n--){
        ll a=2,r=3,m=2;
//        cin>>a>>r>>m;
        ll ans=a%M;
        ll at=a;

        for(int i=1;i<m;i++){
            ll x=at*r;
            ans=(ans+x%M)%M;
            at=x%M;
        }
        cout<<ans<<endl;
    }
    return 0;
 }
