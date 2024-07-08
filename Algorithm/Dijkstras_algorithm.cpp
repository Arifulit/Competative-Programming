#include<bits/stdc++.h>
using namespace std;
#define infinity 99
#define MAX 100
int G[MAX][MAX];

void dijkstra(int n,int startnode){
    int distance[MAX],pre[MAX];
    int visited[MAX]={0},cnt,mindistance,nextnode,i,j;
    for(i=0;i<n;i++){
        pre[i]=startnode;
        distance[i]=G[startnode][i];

    }
    distance[startnode]=0;
    visited[startnode]=1;
    cnt=1;
    while(cnt<n-1){
        mindistance=infinity;
        for(int i=0;i<n;i++){
            if(distance[i]<mindistance &&visited[i]==0){
                mindistance=distance[i];
                nextnode=i;
            }
        }
        
        visited[nextnode]=1;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(mindistance+G[nextnode][i]<distance[i]){
                 distance[i]=mindistance+G[nextnode][i];
                pre[i]=nextnode;
                }
            }
        }
        cnt++;
    }

    for(int i=0;i<n;i++){
        if(i!=startnode){
            cout<<"\nDistance of node "<<i+65<<distance[i]+65;
            cout<<"\nPath"<<i+65;
            j=i;
            do{
                j=pre[j];
                cout<<j+65<<endl;
            }
            while(j!=startnode);

        }
    }

}



int main(){
    int i,j,n,u;
    cout<<"Enter no of vertices: ";
    cin>>n;

    cout<<"\nEnter the adjacency matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>G[i][j];
        }
    }
    cout<<"\nEnter the starting node: ";
    cin>>u;
    dijkstra(n,u);
    return 0;
}