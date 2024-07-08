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
    int n,m,x;
    cin>>n>>m;
    vector<int>v[n+4];
    vector<int>ans[n+3];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x;
            v[i].push_back(x);
        }
    }

    for(int i=0;i<n;i++){
        sort(v[i].begin(),v[i].end());
    }

    for(int i=0;i<m;i++){
        int mn=INT_MAX;
        int ind=-1;

        for(int j=0;j<n;j++){
            if(v[j][0]<mn){
                mn=v[j][0];
                ind=j;
            }
        }

        for(int j=0;j<n;j++){
            if(j==ind){
                ans[j].push_back(v[j][0]);
                v[j].erase(v[j].begin());

            }
            else{
                ans[j].push_back(v[j][v[j].size()-1]);
                v[j].pop_back();
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
            cout<<endl;
        }
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