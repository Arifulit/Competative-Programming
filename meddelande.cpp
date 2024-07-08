#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int a[row][col];

    vector<string>v;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
            if(a[i][j]=='.')continue;
            else{
                v.push_back(a[i][j]);
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

}