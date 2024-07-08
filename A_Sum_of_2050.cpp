#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j;cin>>t;
    long long ar[20];
    
    ar[1]=2050;

    for( i=2;i<=20;i++)
    {
        ar[i]=ar[i-1]*10;
        if(ar[i]>=1e17)break;
    }
    while (t--)
    {
           long long n,nt;
        int cnt=0;
        cin>>n;
        
        if(n%2050==0){
            long long cnt=0;
            for(int j=i;j>=1;j--){
                if(n>=ar[j]){
                    cnt+=n/ar[j];
                    n=n%ar[j];
                }
            }
            cout<<cnt<<endl;
        }
        else cout<<-1<<endl;
      
        

       
    
}}