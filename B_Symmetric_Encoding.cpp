#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string b;
        cin >> n >> b;

        
        string r = b;
        sort(r.begin(), r.end());
        r.erase(unique(r.begin(), r.end()), r.end());

        
        unordered_map<char, char> encodeMap;
        int len = r.size();
        for (int i = 0; i < len; ++i) {
            encodeMap[r[i]] = r[len - 1 - i];
        }

 
        string original;
        for (char ch : b) {
            original += encodeMap[ch];
        }

     
        cout << original << endl;
    }

    return 0;
}
