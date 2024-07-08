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
 ll int n,k,ans=0;
cin>>n>>k;
ll int a[n];
map<ll int,ll int> m;

for(ll int i=0;i<n;i++){
	cin>>a[i];
	for(ll int j=0;j<=30;j++){

		if(a[i]&(1<<j)) 
        m[j]++;
	}
}

for(ll int j=30;j>=0;j--){
	
	if(n-m[j]<=k){
		ans+=(1<<j);
		k-=(n-m[j]);
	}
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