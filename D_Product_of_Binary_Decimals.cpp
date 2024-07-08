#include <bits/stdc++.h>

#define lli long long int 
using namespace std;


void solve() {
    lli n;
    cin >> n;
    lli arr[] = {100000, 11111, 11110, 11101, 11100, 11011, 11010, 11001, 11000, 10111, 10110, 10100, 10011, 100011, 10010, 10001, 10000, 1111, 1110, 1101, 1100, 1011, 1010, 1001, 1000, 111, 110, 101, 100, 11, 10};
    string ans = "YES";
    lli past = n;
    int got = 0;

    while (true) {
        got = 0;
        for (lli i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
            lli num = arr[i];
            if (n >= num) {
                if (n % num == 0) {
                    past = n;
                    n = n / num;
                    got = 1;
                    break;
                }
            }
        }


        if (got == 0) {
            if (n == 1) {
                ans = "YES";
            } else {
                ans = "NO";
            }
            break;
        } else {
            if (n <= 0) break;
            else {
                if (past == n) {
                    ans = "NO";
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}

int main() {
    lli t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
