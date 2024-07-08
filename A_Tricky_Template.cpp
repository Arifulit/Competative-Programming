
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a, b, c;
        cin >> a >> b >> c;

        bool possible = true;

        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                if (c[i] != a[i]) {
                    possible = false;
                    break;
                }
            } else {
                if (c[i] == a[i] || c[i] == b[i]) {
                    possible = false;
                    break;
                }
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
