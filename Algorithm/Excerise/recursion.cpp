#include<bits/stdc++.h>
using namespace std;
int solve(int n){
      if(n==1){
        return 1;
      }
      solve(n-1);
      cout<<n<<endl;
}
int main(){
    int n;cin>>n;
    solve(n);
}