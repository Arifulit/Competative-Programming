#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pai acos(-1)
#define mod 1000000007
#define INF 1e18
#define pb push_back
#define pi pair<int,int>
#define pii pair<ll,ll>
#define srt(v) sort(v.begin(),v.end())
#define rsort(v) sort(v.rbegin(),v.rend())
#define fast  ios_base::sync_with_stdio(false),cin.tie(NULL)
 
 
void solve(){
    int n;
    cin>>n;
    ll ar[n+2];
    ll br[n+2];

    for(int i=1;i<=n;i++){
        cin>>ar[i];
        br[i]=ar[i];
    }

    ll pre1[n+2];
    pre1[0]=0;

    for(int i=1;i<=n;i++){
        pre1[i]=pre1[i-1]+ar[i];
    }
    
    sort(br+1,br+n+1);

    ll pre2[n+3];
    pre2[0]=0;

    for(int i=1;i<=n;i++){
        pre2[i]=pre2[i-1]+br[i];
    }

    int q;
    cin>>q;
    while(q--){
        int k,l,r;
        cin>>k>>l>>r;

        if(k==l){
            cout<<pre1[r]-pre1[l-1]<<endl;
        }
        else cout<<pre2[r]-pre2[l-1]<<endl;
    }

}
int main()
{
    fast;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}