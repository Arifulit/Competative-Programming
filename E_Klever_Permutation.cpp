#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;


      while(t--){

        int n,k;
        char s='-';
        cin>>n>>k;
        vector<int>ans;

        ans.push_back(n);

        for(int i=1;i<k;i++){
            ans.push_back(ans.back()-(n-i)/k-1);
        }

        ans.push_back(0);

        for(int i=1;i<k;i+=2){
            ans[i]=ans[i+1]+1;
        }
        ans.pop_back();

        int pos=0;
        while(ans.size()<n){
            if(s=='+'){
                ans.push_back(ans[pos]+1);
                s='-'; 
            }
            else{
                ans.push_back(ans[pos]-1);
                s='+';
            }
            pos++;
        }

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;

      }
      return 0;
}