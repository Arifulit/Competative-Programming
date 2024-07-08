#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
 /*    int t;
    cin >> t;
    while (t--){
        int n;cin>>n;

        map<string,int>cnt;

        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            cnt[s]++;

        }
        int ans=0;

        for(auto u:cnt){
            if(u.second==2)ans++;

        }
        cout<<ans<<endl;
    }
 */


 int t;cin>>t;

while(t--){

    /* string s;
    char c;
    cin>>c;
    getline(cin,s);
    s=c+s;

    string tmp;

    vector<string>v;
    for(auto u:s){
        if(isspace(u)){
            v.push_back(tmp);
            tmp.clear();
        }

        else tmp+=u;
    }
    v.push_back(tmp);

    map<string,int>cnt;
  

   int mxfre=0;


    for(auto u:v){
    cnt[u]++;
    mxfre=max(mxfre,cnt[u]);
    }

    string ans;

    for(auto u:v){
        if(cnt[u]== mxfre){
            ans = u;

            break;
        }
    }

    cout<<ans<<" "<<mxfre<<endl;
} */

map<int, int> cnt;

int  n;
 cin >> n;
 for( int i =1; i<=n; i++){
    int a;
    cin>> a;
    cnt[a]++;
 }
 
 int ans = 0;

 for(auto u:cnt){
    if(u.second>=u.first)ans+=(u.second-u.first);
    else ans+=u.second;
 }
cout<<ans<<endl;

}

}