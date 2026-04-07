import java.util.Scanner;

public class Combination {

    // Function to calculate factorial
    public static int factorial(int num) {
        int fact = 1;

        for(int i = 1; i <= num; i++) {
            fact *= i; // multiply numbers
        }

        return fact;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // Taking input
        System.out.print("Enter value of n: ");
        int n = sc.nextInt();

        System.out.print("Enter value of r: ");
        int r = sc.nextInt();

        // Combination formula
        int result = factorial(n) / (factorial(r) * factorial(n - r));

        // Display result
        System.out.println("Combination C(" + n + "," + r + ") = " + result);
    }
}
