#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin>>t;
    while (t--)
    {
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    vector<ll>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll pre=0;
    ll mn=0;

    for(int i=0;i<n;i++){
        mn=min(b,abs(v[i]-pre)*a);
        f-=mn;
        pre=v[i];
    }
    if(f>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
      
    }
    
}