#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll const N=1e6+10;
ll a[N];
int main() {

   int t;
   cin>>t;
   ll b[t];
   for(int i=0;i<t;i++)
   cin>>b[i];
   
   for(int i=t-1;i>0;i--) {
    if(b[i]-b[i-1]>=2) {
    a[i-1]=1;
    }
   }
   
   
   bool flag=false;

   for(int i=t-1;i>0;i--) {
    if(a[i-1]!=0 && a[i]!=0)
    a[i-1]+=a[i];
   }

   for(int i=0;i<t;i++) {
    if(a[i]!=0)
    cout<<a[i]+1<<endl;

    else cout<<a[i]<<endl;
   }

   
}