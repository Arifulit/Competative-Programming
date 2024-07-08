#include<bits/stdc++.h>
using namespace std;

long long save[55];
long long fibo(long long n){
    if(n==0)return 0;
    if(n==1)return 1;

    if(save[n]!=-1)return save[n];

    save[n]=fibo(n-1)+fibo(n-2);

    return save[n];
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(save,-1,sizeof(save));
    long long n=50;

    cout<<fibo(n) << '\n';
    return 0;
}
