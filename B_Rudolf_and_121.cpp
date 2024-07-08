#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        long long sum = 0;
        int minElement = 1e9+7;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            minElement = min(minElement, a[i]);
        }

        cout << ((sum % 2 == 0 && minElement <= sum / 2) ? "YES" : "NO") << endl;
    }

    return 0;
}
