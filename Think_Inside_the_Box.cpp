#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
 ll n;
 cin>>n;
 ll ans=0;
 for(int i=n;i>=0;i--){
    int tmp=i;

    set<ll>st;
    while (tmp>0)
    {
        st.insert(tmp%10);
        tmp/=10;
        /* code */
    }
    if(st.size()==1){
        ans=i;
        break;
    }
    
 }
 cout<<ans<<endl;
}