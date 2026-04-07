#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int num) {
    int fact = 1;

    for(int i = 1; i <= num; i++) {
        fact *= i; // multiply numbers
    }

    return fact;
}

int main() {
    int n, r, result;

    // Taking input
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter value of r: ";
    cin >> r;

    // Combination formula
    result = factorial(n) / (factorial(r) * factorial(n - r));

    // Output result
    cout << "Combination C(" << n << "," << r << ") = " << result;

    return 0;
}
