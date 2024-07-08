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
int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        
       
        int count[7] = {0};
        
        
        for (char c : a) {
            count[c - 'A']++;
        }
        
        int needed = 0;
        
        for (int i = 0; i < 7; i++) {
            if (count[i] < m) {
                needed += (m - count[i]);
            }
        }
        
        
        cout << needed << endl;
}

 int  main(){
 Fast
 ll n,t=1;
 cin >> t;
for(n = 1; n <= t; n++)

{
    solve();
 }
 return 0;
}