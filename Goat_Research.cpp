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
   vector<string>vec(n);
   int maxsize=0;

   for(int i=0;i<n;i++){
    cin>>vec[i];


    if((int)vec[i].size()%2==0){
        vec[i].pop_back();

        if(vec[i].size()==1){
            vec[i].push_back('a');
            vec[i].push_back('a');
        }
           

    }
    maxsize=max(maxsize,(int)vec[i].size());
   }

   for(auto str:vec){

    int tmp=maxsize-str.size();
    tmp=tmp/2;

    while(tmp--){
        cout<<" ";
    }
    cout<<str<<endl;
   }
}
int main()
{
    fast;
    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }
}