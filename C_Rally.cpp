#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        x=(abs(a[i]-n));
       x*=x;
        sum+=x;
    }

    sort(a,a+n);

    for(int i=0;i<n;i++){
       x=(abs(n-a[i]));
       x*=x;
        sum+=x;
    }

    cout<<sum;


}