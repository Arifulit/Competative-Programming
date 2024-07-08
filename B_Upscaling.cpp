#include<bits/stdc++.h>
using namespace std;


void solve(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    int t=2;
    char first ='#';
    char second ='.';
    if(i%2==0){
        first='.';
        second='#';
    }
    while (t--)
    {
       for(int j=0;j<n;j++){
        int p=2;
        while(p--){
            if(j%2==0){
                cout<<second;
            }
            else{
                cout<<first;
            }
        }
       }
       cout<<endl; /* code */
    }
    

   }
  
}




 int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
 }