#include <bits/stdc++.h>

using namespace std;

using Long = long long;
#define pii pair <int,int>

const int N = 1e5;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T = 1, Ca = 0;
    //cin >> T;

    while (T--) {
        int n; cin >> n;
        map <int, int> primes;
        int num = n;

        for (int i = 2; i*i <= num; i++) {
            if (num%i == 0) {
                while (num%i == 0) {
                    primes[i]++;
                    num /= i;
                }
            }
        }

        if (num > 1)primes[num]++;

        cout << n << " = ";
        for (auto it = primes.begin(); it != primes.end(); it++) {
            cout << it->first << " ^ " << it->second;
            auto temp = it;
            temp++;
            if (temp != primes.end()) cout << " * ";
        }cout << '\n';
    }

    return 0;
}