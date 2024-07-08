#include<bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;

void solve( ) {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int p = 0, p1 = n - 1;

    while (a[p] == a[0]) ++p;
    while (a[p1] == a[n - 1]) --p1;

    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    if (a.front() != a.back()) {
        cout << min(n - p, p1 + 1) << endl;
        return;
    }

    cout << max(0, p1 - p + 1) << endl;
}

int main() {
    Fast
    ll t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
