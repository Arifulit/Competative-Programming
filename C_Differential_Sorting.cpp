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
        int n,i; cin>>n; int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        if(is_sorted(a,a+n)) cout<<"0"<<endl;
        else if(a[n-1]<0||a[n-2]>a[n-1]) cout<<"-1"<<endl;
        else{
            cout<<n-2<<endl;
            for(i=n-3;i>=0;i--) cout<<i+1<<" "<<i+2<<" "<<n<<endl;
        }
    
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