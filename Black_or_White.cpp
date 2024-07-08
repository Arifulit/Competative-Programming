#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    long long  n,m;
    n=a.length();
    m=b.length();
    
    int x=a.back()-'0';
    int y=b.back()-'0';
    if((x+y)%2==0)cout<<"Black"<<endl;
    else cout<<"White"<<endl;

    return 0;
}