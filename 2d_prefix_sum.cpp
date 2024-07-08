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
    int n,m;cin>>n>>m;
    int ar[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }
    int pre[n][m];
    pre[0][0]=ar[0][0];
    for(int i=1;i<m;i++)pre[0][i]=pre[0][i-1]+ar[0][i];
    for(int i=1;i<n;i++)pre[i][0]=pre[i-1][0]+ar[i-1][0];

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            pre[i][j]=pre[i][j-1]+pre[i-1][j]+ar[i][j]-pre[i-1][j-1];

        }
    }
    
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             cout<<pre[i][j]<<" ";
             cout<<endl;
        }
        
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