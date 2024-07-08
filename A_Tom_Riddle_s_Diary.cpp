#include<bits/stdc++.h>
using namespace std;
int main(){

    
    int n,i,j;
    cin>>n;
    string s[100+2];


    for( i=0;i<n;i++){
        cin>>s[i];

        for( j=0;j<n;j++){
            if(s[i]==s[j]){
                break;
            }
        }


        if(i==j)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
   
}