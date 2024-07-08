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
    ll n;
    int cnt=0;
    cin>>n;

    

    unordered_map<char,ll>sub;
     string s;cin>>s;

    for(auto i:s){
        sub[i]++;
    }

    for(auto i:sub){
        if(i.second>=i.first-'A'+1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
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