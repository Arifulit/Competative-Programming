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
 
 string s,ss;
 map<char,char>mp;

void solve(){
    mp[')']='(';
    mp[']']='[';
    ll i,ans,mx=0,len,ok=0;

    while (cin>>s)
    {
        ok=0,mx=0;
        stack<char>st;
        for(i=0;i<s.size();i++){
            if(s[i]=='('|| s[i]=='['){st.push(s[i]);}
            if(i>0){
                if(s[i]==']'||s[i]==')'){
                    if(!st.empty()){
                        if(st.top()==mp[s[i]]){
                            ok+=2;
                            st.pop();
                        }
                        else{
                            while(!st.empty())st.pop();
                        }
                        mx=max(mx,ok);
                    }
                    if(st.empty()){mx=max(mx,ok);ok=0;}

                }
            }
        }
        /* code */
        cout<<mx<<endl;
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