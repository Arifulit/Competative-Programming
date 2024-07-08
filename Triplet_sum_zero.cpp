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

void cal(int a[],int n){
    for(int i=0;i<n;i++){
        unordered_set<int>s;
        for(int j=i+1;j<n;j++){
            int x=-(a[i]+a[j]);
            if(s.find(x)!=s.end()){
                cout<<x<<" "<<a[i]<<" "<<a[j]<<endl;
            }
            else{
                s.insert(a[j]);
            }
        }
    }
}
 
 
void solve(){
     int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cal(a,n);
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