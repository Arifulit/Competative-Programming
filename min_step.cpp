#include<bits/stdc++.h>
using namespace std;

const int N=1e5 +9;
int step[N];

int min_steps(int i){

      if(i==1)return 0;
      if(step[i]!=-1)return step[i];

    int ans=min_steps(i-1)+1;

    if(i%2==0){
        ans=min(ans,min_steps(i/2)+1);
    }
    if(i%3==0){
        ans=min(ans,min_steps(i/3)+1);
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    memset(step,-1,sizeof step);
    cout<<min_steps(1000)<<endl;
    return 0;
   

}