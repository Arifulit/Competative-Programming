#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll a[1010];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        ll pre[n+1]={};
        ll dp[n+1]={};

        partial_sum(a+1,a+n+1,pre+1);

        for(int i=1;i<=n;i++){
            dp[i]=-1e18;
            
            for(int j=0;j<i;j++){
                dp[i]=max(dp[i],dp[j]+(pre[i]-pre[j])*(i-j));
            }
        }
        cout<<dp[n]<<endl;

    }
}