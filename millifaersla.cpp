#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
   // int mn=min(a,b,c);
     int mn = 1e9+1;

    //int mn=99999;
    if(a<mn)mn=a;
    if(b<mn)mn=b;
    if(c<mn)mn=c;


    if(mn==a)cout<<"Monnei";
    else if(mn==b)cout<<"Fjee";
    else cout<<"Dolladollabilljoll";
     


}