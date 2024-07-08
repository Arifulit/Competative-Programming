#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int main(){
    ll t;
   string s,s1,s2;
    cin>>t;
    int a,b;
    while (t--)
    {
     
       cin>>s;
       int k;
       for(int i=0;i<s.size();i++){
        if(s[i]!='0'){
            k=i;
            break;
        }
       }
       s1=s.substr(0,k);
       s2=s.substr(k,s.size()-1);
       
    a=stoi(s1);
    b=stoi(s2);
    if(a>=b)cout<<"-1"<<endl;
    else {
        cout<<a<<" "<<b<<endl;
    }
      
    }
    
}