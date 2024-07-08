#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int z=0,neg=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];  
            if(a[i]==0)z++;
            else if(a[i]<0)neg++;
        }
        if(z>0 ||neg%2!=0)cout<<0<<endl;
        else{
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }


        
    }
    
}