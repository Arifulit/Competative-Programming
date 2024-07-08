
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sub;

    float grad,total,avg;
    vector<float>v;

    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>sub;
        
        for(int j=0;j<sub;j++){
            cin>>grad;
            total+=grad;
        }
        avg=total/sub;
        v.push_back(avg);
        total=0;
    }

    for(int k=0;k<n;k++){
        cout<<"Case "<<k+1<<": "<<fixed<<setprecision(3)<<v.at(k)<<endl;
    }
    
}