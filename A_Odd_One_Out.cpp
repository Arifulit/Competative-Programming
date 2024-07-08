
#include<bits/stdc++.h>
using namespace std;

int findOddOneOut(int a, int b, int c) {
    if (a == b) {
        return c;
    } else if (a == c) {
        return b;
    } else {
        return a;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int result = findOddOneOut(a, b, c);
        cout << result << std::endl;
    }

    return 0;
}
