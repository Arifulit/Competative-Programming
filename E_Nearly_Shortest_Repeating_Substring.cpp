#include <iostream>
#include <string>

using namespace std;

int shortestSubstring(string s) {
    int n = s.length();
    for (int len = 1; len <= n; ++len) {
        if (n % len == 0) {
            bool valid = true;
            string k = s.substr(0, len);
            for (int i = len; i < n; i += len) {
                string sub = s.substr(i, len);
                int diff = 0;
                for (int j = 0; j < len; ++j) {
                    if (sub[j] != k[j]) {
                        diff++;
                    }
                }
                if (diff > 1) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                return len;
            }
        }
    }
    return n;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << shortestSubstring(s) << endl;
    }

    return 0;
}
