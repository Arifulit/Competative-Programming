#include <bits/stdc++.h>
using namespace std;

#define pb              push_back
#define ll              long long
#define ld              long double
#define N               cout << "\n"
#define fr(i,n)         for(int i=0;i<n ;i++)
#define fr1(i,n)        for(int i=1;i<=n;i++)
#define fr2(n,m)        for(int i=n;i<=m;i++)
#define co(x)           cout << x
#define cc(x)           cout << x << " "
#define cl(x)           cout << x << "\n"
#define coo(x,z)        cout << x << " " << z <<"\n";
#define cooo(x,z,k)     cout << x << " " << z << " " << k << "\n"
#define reversed(s)     reverse(s.begin(), s.end())
#define asort(s)        sort(s.begin(), s.end())
#define dsort(s)        sort(s.begin(), s.end(),greater<ll>())
#define pi              pair <ll, ll>
#define ps              pair <string, ll>
#define x               first
#define z               second
#define FASTREAD        ios_base::sync_with_stdio(false);cin.tie(NULL)
#define bitcount(n)     __builtin_popcountll(n)
#define all(s)          s.begin(), s.end()
const ll INF = LLONG_MAX;
const ll SZ = 5e5+7;
const ll mod = 1e9+7;
ll i,j,k,n,m,x,z,q,t,a[SZ],ans = 1e18;

ll cal(ll x)
{
    return (2 * a[i] - a[x]) * (2 * a[i] - a[x]) + (a[n] - 2 * a[x] + a[i]) * (a[n] - 2 * a[x] + a[i]);
}

void ternarySearch(ll l, ll r)
{
    while (l  <= r) {
        ll mid1 = l + (r - l) / 3;
        ll mid2 = r - (r - l) / 3;
        ll f1 = cal(mid1);
        ll f2 = cal(mid2);
        ans = min(ans , f1);
        ans = min(ans , f2);
        if (f1 > f2)
            l = mid1 + 1;
        else
            r = mid2 - 1;
    }
}

int main()
{
    cin >> t;
    while(t--)
    {
        ans = 1e18;
        cin >> n;
        fr1(i , n) cin >> a[i] , a[i] += a[i-1];
        for(i = 1 ; i <= n - 2 ; i++) ternarySearch(i + 1 , n - 1);
        cl(ans);
    }
    return 0;
}