#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;
    string s="abcdefghijklmnopqrstuvwxyz";
    string t=s.substr(0,k);

    while(n--){
        cout<<t;
    }
    cout<<endl;
}

int main() {
    int t;
   cin>>t;
   while (t--)
   {
    solve();
    /* code */
   }
   

    return 0;
}
