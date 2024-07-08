#include<bits/stdc++.h>

using namespace std;
int main (){
    string s;
    cout<<"Enter string "<<endl;
    cin>>s;

    //string s="abba";
    int i=0,j=s.size()-1;
    while(j>i){

        if(s[i++]!=s[j--]){
              cout<<"Not palindrom"<<endl;
              return 0;
        }
       

    }
    cout<<"Palindrom  "<<s<<endl;
    return 0;
}