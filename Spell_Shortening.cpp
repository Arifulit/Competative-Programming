#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int idx = -1;

        // Find the first character to be deleted to make the string lexicographically smallest
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] > s[i + 1]) {
                idx = i;
                break;
            }
        }

        // If no such character is found, delete the last character
        if (idx == -1) {
            idx = n - 1;
        }

        // Print the resulting string after deleting the character
        for (int i = 0; i < n; ++i) {
            if (i != idx) {
                cout << s[i];
            }
        }

        cout << endl;
    }

    return 0;
}
