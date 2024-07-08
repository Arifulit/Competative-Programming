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
    int a[n+3];
    for(int i=0;i<n;i++)cin>>a[i];
   int l=0,r=n-1,z=0;
   int s=0,d=0;
   while(l<=r){
    if(z%2==0){
        if(a[l]>a[r]){
            s+=a[l];
            l++;
        }
        else{
            s+=a[r];
            r--;
        }
    }
    else{
          if(a[l]>a[r]){
            d+=a[l];
            l++;
        }
        else{
            d+=a[r];
            r--;
        }
     }
     z++;
   }
   cout<<s<<" "<<d<<endl;
        
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