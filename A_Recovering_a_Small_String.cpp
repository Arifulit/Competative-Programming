#include<bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;

void solve()

{
  int n;
    cin>>n;
 
    for(int i=1;i<=26;i++)
    {
        for(int j=1;j<=26;j++)
        {
            for(int k=1;k<=26;k++)
            {
                if(i+j+k==n)
                {
                    string str="";
                    str.push_back('a'+i-1);
                    str.push_back('a'+j-1);
                    str.push_back('a'+k-1);
                    cout<<str<<endl;
                    return;
                }
            }
        }
    }
}

 int  main()
 {

 Fast
 ll n,t=1;
 cin >> t;
for(n = 1; n <= t; n++)

{
    solve();
 }
 return 0;
}