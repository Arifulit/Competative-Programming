#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>cnt;
    int x;
    vector<int>order;
    
    while(scanf("%d",&x)!=EOF){
        if(cnt.find(x)!=cnt.end());
        else order.push_back(x);

        cnt[x]++;
    }
    for(auto x:order){
        cout<<x<<" "<<cnt[x]<<endl;
    }
    return 0;

}