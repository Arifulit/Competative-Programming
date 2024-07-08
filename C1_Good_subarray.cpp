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
    int ar[n+3];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    ll ans=0;
    int j=1;

    for(int i=1;i<=n;i++){
        while(j<=n && ar[j]+(i-1)>=j)
         j++;

        ans+=(j-1);
        if(j==i)j++;
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