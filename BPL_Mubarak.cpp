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
    int cnt=0;
    string s;cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='W'||s[i]=='N'||s[i]=='D')cnt++;
    }



    int ans=s.size()-cnt;
    int over=0,ball=0;
    if(ans<6){
        ball=ans;
    }
    else{
        ball=ans%6;
        over=ans/6;
    }
   	  if(ball == 0 && over > 0) {
            cout << over << ((over > 1) ? " OVERS" : " OVER") << endl;
        }
        else if(over == 0 && ball > 0) {
            cout << ball << ((ball > 1) ? " BALLS" : " BALL") << endl;
        }
        else {
            cout << over << ((over > 1) ? " OVERS " : " OVER ") << ball << ((ball > 1) ? " BALLS" : " BALL") << endl;
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