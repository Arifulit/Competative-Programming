
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin.ignore();
    getline(cin,s);

    for(int i=0;i<s.size();i++){

        if(s[i]==' ')continue;
        
      if(s[i]>='a' && s[i]<='z')s[i]-=n;

      if(s[i]<'a'){
        s[i]+=26;
      }

    }
    cout<<s;

}