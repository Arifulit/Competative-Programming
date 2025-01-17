#include<bits/stdc++.h>
using namespace std;

const int N=1e5+9;

vector<int>g[N];

bool vis[N];

void dfs(int u){
    vis[u]=true;

    for(auto v:g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;

    while(m--){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);

    for(int i=1;i<=n;i++){
        if(!vis[i]){
            cout<<"disconnected";
            return 0;
        }
    }
    cout<<"connected ";
    return 0;
}