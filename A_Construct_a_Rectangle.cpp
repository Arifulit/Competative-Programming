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
    int x,y,z;
    cin>>x>>y>>z;
    if((x+y==z)||(y+z==x)||(z+x==y)||(x==y && z%2==0)||(y==z && x%2==0)||(z==x && y%2==0)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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