#include<bits/stdc++.h>
using namespace std;
int main(){
        int x=10,y;
    int *p,*q;
    p=&x;
    q=&y;
    y=*p;
    *p=15;
    *q=20;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<*p<<endl;
    cout<<*q<<endl;

}