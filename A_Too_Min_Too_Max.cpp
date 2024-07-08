#include <bits/stdc++.h>

#define lli long long int 
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            //sum=sum+(a[i+1]-a[i]);
        }
        
        sort(a,a+n);
        for(int i=0;i<n;i++){
            (sum)+=a[i]-a[i+1];
        }
        cout<<abs(sum)<<endl;

    }
}