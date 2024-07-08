#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 int main(){
    ll t;
    cin>>t;
    ll ans=0;
    while (t--)
    {
        ll n;cin>>n;
    
         ans=0;
         while(n>=1){
          ans+=n;
          n=n/2;
        }

        cout<<(ans)<<endl;
        
        
    }
    
}