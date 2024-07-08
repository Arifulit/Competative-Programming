#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string f,l;
        cin >> f>> l;

        int m = 0, cat = 0;

        for (int i = 0; i < n; ++i) {
            if (f[i] != l[i]) {
                if (f[i] == '1') {
                    
                    m++;
                } else {
                    
                    cat++;
                }
            }
        }

        cout << m+ max(cat - m, 0) << endl;
    }

    return 0;
}
