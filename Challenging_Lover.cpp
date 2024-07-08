#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(t--){

    int n;
    
    int ans=0,c=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            ans+=i;
        }
    }

    for(int i=1;i<=ans;i++){
        if(ans%i==0){
            c++;
        }
    }

    if(c==2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
}