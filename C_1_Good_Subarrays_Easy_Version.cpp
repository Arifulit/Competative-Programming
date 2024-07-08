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
 
 vector<ll>v,p;
void solve(){
     ll a,b,c,d,e,f,i,j,k,g,n,m;
    cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a;
			v.pb(a);
		}
		ll ans=n*(n+1)/2;
		c=-1;
		for(i=0;i<n;i++)
		{
			d=i-v[i];
			if(d<=c)continue;
			f=d-c;
			ans-=f*(n-i);
			c=d;
		}
		cout<<ans<<endl;
		v.clear();
    
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