#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    string s;
    int cur=1;
    int ans=1;
    cin>>n>>m>>s;

    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            cur++;
            ans=max(ans,cur);
        }
        else{
            cur=1;
        }
    }

    cout<<ans<<" ";

    for(int i=n;i<(n+m);i++){
        char c;
        cin>>c;
        s+=c;
        if(s[i]==s[i-1]){
            cur++;
            ans=max(ans,cur);

        }
        else {
            cur=1;
        }
        cout<<ans<<" ";

    }
    cout<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}