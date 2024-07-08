#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
   // cin.ignore();

    getline(cin,s);

   // reverse(s.begin(),s.end());
   int n=s.size();
   for(int i=n-1;i>=0;i--){
    cout<<s[i];
   }
   
}