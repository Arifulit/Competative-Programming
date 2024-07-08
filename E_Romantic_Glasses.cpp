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
 
  const int MAX_SIZE=2e5+5;
  //const int INF =1e8;
  const int MOD =9999999999999;
  ll n;
void solve(){

    int n;cin>>n;
    map<ll,bool>m;
    m[0]=true;
    
    string ans="NO";

    ll a,s=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(i%2==1)s+=a;
        else s-=a;

        if(m[s]==true)ans="YES";
        else m[s]=true;
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