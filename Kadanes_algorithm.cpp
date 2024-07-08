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
    int a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx=INT_MIN;
    int cus=0;
    for(int i=0;i<n;i++){
        cus+=a[i];
        mx=max(mx,cus);
        if(cus<0)cus=0;
    }
    cout<<mx<<endl;
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