#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main(){
    string s;cin>>s;
    while(next_permutation(s.begin(),s.end())){
        cout<<s<<endl;
    }
}