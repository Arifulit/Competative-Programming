#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, l;
        cin >> a >> b >> l;

        int gcd_ab = __gcd(a, b);
        long long lcm_ab = (long long)a * b / gcd_ab;

        if (l % lcm_ab != 0) {
            cout << "0\n";
            continue;
        }

        int divisors = 0;
        int x = gcd_ab;

        for (int i = 1; i * i <= x; ++i) {
            if (x % i == 0) {
                divisors++;
                if (i != x / i) {
                    divisors++;
                }
            }
        }

        cout << divisors << endl;
    }

    return 0;
}
