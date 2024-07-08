#include<bits/stdc++.h>
using namespace std;


const int N=1e7+9;
bool is_prime[N];

vector<int>prime;

void seive(){
    for(int i=2;i<=N;i++){
        if(!is_prime[i]){

            for(int j=i+i;j<=N;j+=i){
                is_prime[j]=true;
            }
        }
    }

    for(int i=2;i<=N;i++){
        if(!is_prime[i]){
            prime.push_back(i);
        }
    }
}




void solve(){
    int n=20;
   // cin>>n;
    cout<<prime[n-1]<<endl;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    seive();

    int t=1;
    while(t--){
        solve();
    }

    return 0;
}