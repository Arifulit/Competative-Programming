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
 
     ll p=10e18;
void solve(){

    ll n;
    cin>>n;

  
    int ans=1,z=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0)z=1;
    }
    if(z==1)cout<<0<<endl;
    else{
        for(int i=0;i<n;i++){
            if(ans<=p/a[i]){
                ans=ans*a[i];
            }
            else{

                ans=-1;
                break;
            }

        }
    }
    cout<<ans<<endl;


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