#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    string r="abcdefgh";
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<8;i++){
            if(s[1]-48==i+1)continue;
            cout<<s[0]<<i+1<<endl;
        }
        for(int i=0;i<8;i++){
            if(s[0]==r[i])continue;
            cout<<r[i]<<s[1]<<endl;
        }
    
    }
}