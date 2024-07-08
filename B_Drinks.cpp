#include<bits/stdc++.h>
using namespace std;
int main(){
    long  double n;
    cin>>n;


    vector<long double>v(n);
    long double sum=0;

    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    cout<<sum/n;



}