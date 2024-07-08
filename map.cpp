#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
   /*  map<string,bool>vis;
    while (t--){
   
 string s;
 cin >> s;

 if(vis[s] == 1 )cout << "YES" <<endl;
 else cout << "NO" << endl;

 vis[s] = 1; */



    
    map<string,int > cnt;

    map<string,string >ipName;
    while (t--)
    {
        /* string s;
        cin >> s;

        if(cnt[s] == 0 ) cout<< "OK" <<endl;
        else cout << s << cnt[s] <<endl;

        cnt[s]++; */
        /* code */

   /*   int n,m;
     cin>>n>>m;

        for(int i = 0; i < n; i++){
            string name,ip;
            cin>>name>>ip;
            ipName[ip]=name;
        }

        while(m--){
            string s1,ip;
            cin >> s1 >>ip;

            ip.pop_back();

            cout<<s1<<" "<<ip<<"; # "<<ipName[ip] <<endl;
        }
    } */


    int n,m;
    cin>>n>>m;
    map<pair<int, int>, bool>vis;

    bool done = 1;

   while(m--){
    int a,b;
    cin>>a>>b;

    if(vis[{a,b}])done = 0;

    vis[{a,b}] = 1;
   } 
    
    if(done == 1)cout<<" possible"<<endl;
    else cout<<"impossible"<<endl;


}