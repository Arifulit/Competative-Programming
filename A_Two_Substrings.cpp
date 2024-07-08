#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    int flag=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[i+1]){
             t[i]=s[i];
             if(t=="AB" and t=="BA")flag=1;
        }
    }
    if(flag==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}



