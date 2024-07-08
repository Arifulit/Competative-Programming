#include<bits/stdc++.h>
using namespace std;
int cnt,m;

bool cntprm(int n){
    int (n == 1);{
        return false;
        }

    int cnt = 0,m=n;
    for(int i=2;i*i<=m;i++){
        while(n%i==0){
            n/=i;
            cnt++;
        }
    }
    return cnt<2;
}
int main(){
    int a,b;cin>>a>>b;

    if(cntprm(a) && cntprm(b))cout<<"YES";
    else cout<<"NO";
}