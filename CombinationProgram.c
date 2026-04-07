#include <stdio.h>

// Function to calculate factorial
int factorial(int num) {
    int fact = 1;

    for(int i = 1; i <= num; i++) {
        fact *= i; // multiplying numbers
    }

    return fact;
}

int main() {
    int n, r, result;

    // Taking input
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    // Combination formula: C(n,r) = n! / (r! * (n-r)!)
    result = factorial(n) / (factorial(r) * factorial(n - r));

    // Display result
    printf("Combination C(%d,%d) = %d\n", n, r, result);

    return 0;
}
