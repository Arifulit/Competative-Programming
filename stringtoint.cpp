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
    string s;cin>>s;
    int num;
    for(int i=0;i<s.size();i++){
        int x=s[i]-'0';
        num=(num*10)+x;
    }
    cout<<num<<endl;
    int num2=stoi(s);
    cout<<num2<<endl;
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