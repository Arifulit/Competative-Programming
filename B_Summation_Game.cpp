#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;

int main(){
    int t;cin>>t;
    while(t--){

        int n,k,x;
        int a[N];

        cin>>n>>k>>x;
        int ans=0;

        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        sort( a+1, a+1+n);
        for(int i=1;i<=n-x;i++){
            ans+=a[i];
        }

        for(int i=n-x+1;i<=n;i++){
            ans-=a[i];
        }

        int temp=ans;

        for(int i=1;i<=k;i++){
            if(n-i+1>=1)temp+=a[n-i+1];

            if(n-i+1-x>=1)temp-=2*a[n-i+1-x];
            ans=max(ans,temp);
        }

        cout<<ans<<endl;
        
    }
}