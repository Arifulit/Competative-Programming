#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        x-=k;
    }
    if(x>=0)cout<<"Jebb";
    else cout<<"Neibb";
}