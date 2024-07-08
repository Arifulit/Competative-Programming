#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[n+4],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

       /*  if(sqrt(sum))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 */

        if(sum>=0){
            ll sr = sqrt(sum);
            if((sr*sr)==sum)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}