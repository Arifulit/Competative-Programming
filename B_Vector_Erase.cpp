#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;cin>>n;

    vector<int>v(n);

    for(auto &i:v)cin>>i;

    int r,l,m;
    cin>>r>>l>>m;

    v.erase(v.begin()+r-1);

    v.erase(v.begin()+l-1,v.begin()+m-1);

    cout<<v.size()<<endl;

    for(auto &i:v)cout<<i<<" ";
    cout<<endl;

}