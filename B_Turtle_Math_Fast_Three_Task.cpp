#include<bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

void solve() {
    ll n;
    cin >> n;
    ll a[n], sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    if(sum%3 == 0) {
        cout << "0\n";
    } 
    else {
        int found = 0;
        for(int i = 0; i < n; i++) {
            ll rem = sum - a[i];

            if(rem % 3 == 0) {
                found = 1;
                break;
            }
        }

        if(found) {
            cout << "1\n";
        } else {
            ll rem = sum % 3;
            rem = 3 - rem;
            cout << (rem < 2 ? "1" : "2") << endl;
        }
    }
}

int main() {
    Fast
    ll t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
