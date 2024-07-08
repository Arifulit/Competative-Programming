#include<bits/stdc++.h>
using namespace std;
const int N=1e5;

bool vis[N];int dis[N];
int par[N];

vector<int>g[N];



int32_t main(){
    int n,m;

    cin>>n>>m;
    while(m--){
        int u,v;
        cin>>u>>v;
       g[u].push_back(v);
       g[v].push_back(u); 

    }
    queue<int>q;

    q.push(1);vis[1]=true;
    int u=q.front();
    q.pop();

    while(!q.empty()){
        int u=q.front();
        q.pop();
      for(auto v:g[u]){

        if(!vis[v]){
            q.push(v);
            dis[v]=dis[u]+1;
            
            vis[v] = true;
        }
      }
    }

    for(int i=1;i<=n;i++){
        cout<<dis[i]<<" ";
    }
    
    cout<<endl;
    int v=4;
    while (v!=1){
        cout<<v<<" ";
        v=par[v];
    }

    cout<<1<<endl;
    

}