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
 

 int sol(int a[],int l,int r){
    int ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(mid<r && a[mid+1]<a[mid]){
            ans=mid+1;
            break;
        }
        else if(mid>l &&a[mid]<a[mid+1]){
            ans=mid;
            break;
        }
        if(a[r]>a[mid])r=mid-1;
        else l=mid+1;
    }
    return ans ;
 }
 
void solve(){
    int n;
    cin>>n;
    int a[n+3];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sol(a,0,n-1);

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