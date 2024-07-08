#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,r;
    cin>>l>>r;
   int f=0,s=1,fib=0;

   while(fib<=r){

    if(fib>=l){
        cout<<fib<<endl;
    }
    fib=f+s;
    f=s;
    s=fib;
    
   }
}