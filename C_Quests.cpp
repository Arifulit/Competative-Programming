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
int n,k;cin>>n>>k;

vector<int>a(n);
vector<int>b(n);

for(int j=0;j<n;j++){
    cin>>a[j];

}
for(int j=0;j<n;j++){
    cin>>b[j];
}
int ans=0;
int fans=0;
int bmax=0;
for(int j=0;j<n;j++){
    if(k==j)break;
    ans+=a[j];
    bmax=max(bmax,b[j]);
    fans=max(ans+(k-j-1)*bmax,fans);

}
cout<<fans<<endl;
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