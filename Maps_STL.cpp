#include<bits/stdc++.h>
using namespace std;


int32_t main(){
    
 

    ios_base::sync_with_stdio(0);
    int q;cin>>q;
   map<string,int>st;
    cin.tie(0);
  
    while(q--){
        int t;cin>>t;
        if(t==1){
            string s;int mar;
            cin>>s>>mar;
            st[s]+=mar;
        }
        else if(t==2){
            string s;cin>>s;
            st.erase(s);
        }

        else {
            string s;
            cin>>s;
            cout<st[s]<<endl;
        }
    }
}