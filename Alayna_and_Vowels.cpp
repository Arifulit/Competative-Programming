#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
       if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||
            s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
    
            cnt++;}
        else 
        continue;
    }
    cout<<cnt<<endl;
 
   

    
}