#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;


      while(t--){

      
    int n,q;
    cin>>n;
    vector<int>a(n);
    vector<int>dif(n);

    for(int &i: a){
        cin>>i;
    }
    dif[n-1]=n;

    for(int i=n-2;i>=0;i--){
        dif[i]=(a[i]==a[i+1] ? dif[i+1] : i+1);
    }

    //int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        --l;--r;
        if(dif[l]>r){
            cout<<-1<<' '<<-1<<endl;
        }
        else{
            cout<<l+1<<' '<<1+dif[l]<<endl;
        }
    }


 }
 return 0;

}
