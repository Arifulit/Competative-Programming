#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int pivotPosition = s.find('^');

    long long leftSum = 0, rightSum = 0;
    
    
    for (int i = 0; i < pivotPosition; ++i) {
        if (isdigit(s[i])) {
            leftSum += s[i] - '0';
        }
    }

    
    for (int i = pivotPosition + 1; i < s.length(); ++i) {
        if (isdigit(s[i])) {
            rightSum += s[i] - '0';
        }
    }

    if (leftSum < rightSum) {
        cout << "right" << endl;
    } else if (leftSum > rightSum) {
        cout << "left" << endl;
    } else {
        cout << "balance" << endl;
    }

    return 0;
}
