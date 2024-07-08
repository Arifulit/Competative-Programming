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
    int n;cin>>n;
    vector<int>a;
    vector<int>note={500,100,50,10,5,1};

    for(int i=0;i<note.size();i++){

       while(n>=note[i])
        {
            a.push_back(note[i]);
            n=n-note[i];
        }
        
    }
     for(int i=a.size()-1;i>=0;i--){
        cout<<a[i]<<" ";
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