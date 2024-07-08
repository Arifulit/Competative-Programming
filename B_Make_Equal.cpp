#include<bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;

void solve() {
    ll n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll s = 0;
    for (int i = 0; i < n; i++) {
        s += a[i];
    }

    int r = s / n;
    ll e = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] >= r) {
            e += (a[i] - r);
        } else {
            int re = r - a[i];
            if (e >= re) {
                e -= re;
            } else {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main() {
    Fast
    ll t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }

    return 0;
}
