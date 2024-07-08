#include<bits/stdc++.h>
using namespace std;

typedef  long long int          ll;
typedef  long double            ld;
typedef  string                 str;
typedef  vector<ll>             vll;
typedef  vector<string>         vs;
typedef  vector<pair<ll, ll>>   vpl;
typedef  set<ll>                sll;
typedef  map<ll,ll>             mll;
typedef  pair<int,int>          pint;
typedef  pair<ll,ll>            pll;

#define  loop                   for(ll i=1; i<=n; i++)

const int N=1e5+10;
const int M=1e9+7;
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);


    int n;cin>>n;
    vector<pair<int,int>>points;
    loop{
        int x,y;cin>>x>>y;
        points.push_back({x,y});

    }
    double mn=M;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            double dist=sqrt((pow((points[i].first-points[j].first),2))+(pow((points[i].second-points[j].second),2)));
            mn=min(mn,dist);
        }
    }

    cout<<setprecision(14)<<mn;

    return 0;
}
