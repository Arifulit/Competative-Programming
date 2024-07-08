#include<bits/stdc++.h>
using namespace std;
const int N=1e5;

bool vis[N];

vector<int>g[N];

void dfs(int u){
    vis[u]=true;

    for(auto v:g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

int32_t main(){
    int n,m;

    cin>>n>>m;
    while(m--){
        int u,v;
        cin>>u>>v;
       g[u].push_back(v);
       g[v].push_back(u); 

    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            ++ans;
        }
    }
    cout<<"Connected Component= "<<ans<<endl;
    

    
    return 0;
    
}