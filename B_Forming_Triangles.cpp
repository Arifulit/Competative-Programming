#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
long long int t;
cin>>t;
while(t--)
{
long long int n;
cin>>n;
vector<ll int>a(n+1);

for(ll int i=1;i<=n;i++)
{
    cin>>a[i];
}
sort(a.begin()+1,a.begin()+n+1);
ll int ans=0;
map<ll int,ll int>m;
for(ll int i=1;i<n;i++)
{
    m[a[i]]+=i-1;
    if(a[i]==a[i+1])
    {
        ans+=m[a[i]];
    }
}
cout<<ans<<endl;

}
return 0;
}
