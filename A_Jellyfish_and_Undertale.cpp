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
 
ll ans=0,a=0,b=0,n=0;

void solve(){
        cin>>a>>b>>n;
    ans=b;
    for(ll i=0,x=0;i<=n;i++){
        cin>>x;
        ans+=min(a-1,x);
    }
    cout<<ans<<endl;

}
int main()
{
    fast;
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
}