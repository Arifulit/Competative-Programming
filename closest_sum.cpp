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
 
 
 void cal(int a[],int n,int x){
    int l=0;
    int r=n-1;
    int ind1,ind2;
    int diff=INT_MAX;
    while(l<r){
        int sum=a[l]+a[r];
        if(abs(sum-x)<diff){
            ind1=l;
            ind2=r;
            diff=abs(sum-x);
        }
    if(sum>x){
        r--;
    }
    else l++;


    }

    cout<<a[ind1]<<" "<<a[ind2]<<" "<<a[ind1]+a[ind2]<<endl;
 }


void solve(){
      int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int x;
    cin>>x;
    cal(a,n,x);
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