#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pai acos(-1)
#define mod 1000000007
#define INF 1e18
#define pb push_back
#define pi pair<int,int>
#define pii pair<ll,ll>
#define srt(v) sort(v.begin(),v.end())
#define rsort(v) sort(v.rbegin(),v.rend())
#define fast  ios_base::sync_with_stdio(false),cin.tie(NULL)
 
 #define testcase(t, x) \
  int t;               \
  cin >> t;            \
  for (int x = 1; x <= t; x++)

#define nl << "\n"


void solve() {
    testcase(tt,t)
    {
	int a,b,c;
	cin>>a>>b>>c;

	cout<<"Case "<<t<<": ";

	if(a>b and a>c)
	    cout<<'A' nl;
	else if(b>a and b>c)
	    cout<<'B' nl;
	else if(c>a and c>b)
	    cout<<'C' nl;
	else
	    cout<<"Confused" nl;
    }

}

int main() {
  fast;
  solve();
  return 0;
}