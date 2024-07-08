#include<bits/stdc++.h>
using namespace std;

const int N=1e5+9;

int main(){
    string a,b,c;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    c=a+b;

    cout<<c<<endl;
     
     char tmp=a[0];
     a[0]=b[0];
     b[0]=tmp;

     cout<<a<<" "<<b<<endl;
}