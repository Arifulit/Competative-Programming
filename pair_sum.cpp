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


int val1,val2;

bool cal(int a[],int n,int x){
    int i=0;
    int j=n-1;
    while(i<j){
        int sum=a[i]+a[j];
        if(sum==x){
            val1=a[i];
            val2=a[j];
                    
            return true;
            }
        if(sum>x)j--;
        else i++;
    }
    return false;

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
    bool ans =cal(a,n,x);
    if(ans==true){
        cout<<"YES"<<endl;
        cout<<val1<<" "<<val2<<endl;
    }
    else cout<<"NO"<<endl;
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