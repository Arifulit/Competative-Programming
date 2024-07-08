#include <iostream>

using namespace std;


int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}


int sumOfDigitsUpTo9() {
    int totalSum = 0;
    for (int i = 1; i <= 9; ++i) {
        totalSum += sumOfDigits(i);
    }
    return totalSum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        
        int repeats = n / 9;

        // Calculate the total sum for the repeated part
        long long repeatedSum = static_cast<long long>(repeats) * sumOfDigitsUpTo9();

        // Calculate the sum of digits for the remaining part
        long long remainingSum = 0;
        for (int i = 1; i <= n % 9; ++i) {
            remainingSum += sumOfDigits(i);
        }

        // Calculate the total sum
        long long totalSum = repeatedSum + remainingSum;

        cout << totalSum << endl;
    }

    return 0;
}
