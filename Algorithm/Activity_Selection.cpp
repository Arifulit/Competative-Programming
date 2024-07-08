#include <iostream>
#include <cmath>

const int MAX_SIZE = 20; // Adjust the maximum board size as needed

int x[MAX_SIZE]; // Global array to store the queen positions

bool Place(int k, int i) {
    for (int j = 1; j < k; ++j) {
        if (x[j] == i || std::abs(x[j] - i) == std::abs(j - k)) {
            return false; // Two queens in the same column or same diagonal
        }
    }
    return true;
}

void NQueens(int k, int n) {
    for (int i = 1; i <= n; ++i) {
        if (Place(k, i)) {
            x[k] = i;
            if (k == n) {
                // Print the solution
                for (int q = 1; q <= n; ++q) {
                    std::cout << "(" << q << "," << x[q] << ") ";
                }
                std::cout << std::endl;
            } else {
                NQueens(k + 1, n);
            }
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the size of the chessboard (n): ";
    std::cin >> n;

    if (n <= 0 || n > MAX_SIZE) {
        std::cout << "Invalid board size. Please enter a valid size." << std::endl;
        return 1;
    }

    NQueens(1, n);

    return 0;
}
