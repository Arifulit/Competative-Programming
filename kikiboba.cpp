#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin>>s;

    /* map<char,int>mp;
    cin>>s;

    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    
    map<char,int>::iterator it;
   /*  for( it=mp.begin();it!=mp.end();it++){
        cout<<"character "<<it->first<<" found "<<it->second<<endl;
    } */
   
/*    if(it->first==it->second)cout<<"boki";

   else if(it->first=='k')cout<<"kiki";
   else if(it->first=='b')cout<<"boba";

   else cout<<"none"; */ 

int b=0,k=0;

for(int i=0;i<s.size();i++){
    if(s[i]=='b')b++;
    else if(s[i]=='k')k++;


}
if(k>b)cout<<"kiki";
else if(k<b)cout<<"boba";
else if(b==k)cout<<"boki";
else cout<<"none";


return 0;

    


}