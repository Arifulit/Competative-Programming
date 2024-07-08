#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    vector<pair<char,char>>pairs(m);

    for(int i=0;i<m;i++){
        cin>>pairs[i].first>>pairs[i].second;

    }

    int maxDis=-1;

    for(int i=0;i<(1<<n);i++){
        bool flag=false;

        for(int j=0;j<m;j++){
            if((i&(1<<(pairs[j].first-'A')))&&(i&(1<<(pairs[j].second-'A')))){
                flag=true;
                break;
            }
        }

        if(!flag)
        maxDis=max(maxDis,__builtin_popcount(i));
    }

    cout<<maxDis<<endl;

}