#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    
    while(t--){
        int n,cnt=0;
        string s;
        cin>>n>>s;
        int idx1,idx2;
        int len=s.size();

        for(int i=0;i<len;i++){
            if(s[i]=='B'){
                idx1=i;
                break;
            }
        }

        for(int i=len-1;i>=0;i--){
            if(s[i]=='B'){
                idx2=i;
                break;
            }
        }

        cout<<idx2-idx1+1<<endl;
       

    }
}