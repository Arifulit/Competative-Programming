#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend()); 

        long long totalDifference = 0;
        
        for (int i = 0, j = 0; i < n && j < m; ++i) {
            if (b[j] > a[i]) {
                totalDifference += b[j] - a[i];
                j++;
            }
        }

        cout << totalDifference << endl;
    }

    return 0;
}
