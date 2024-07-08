#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin>>s;
    map<ll,ll>mp;

    int x=s.size();

     ll sum=0,a=0;
     mp[0]=1;
     for(int i=0;i<x;i++)
    {
        a+=(s[i]-'0');
        a%=3;
        sum+=mp[a];
         mp[a]++;
    }
   

    cout<<sum<<endl;

}