#include <stdio.h>

// Function to print numbers that are NOT in the Fibonacci series
void no_fibonacci(int n) {
    int a = 0, b = 1, c;
    int count = 0, num = 0;
    int fib[100];  // store Fibonacci numbers

    // Generate first few Fibonacci numbers
    fib[0] = a;
    fib[1] = b;
    for (int i = 2; i < 100; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Numbers that are NOT in the Fibonacci series:\n");

    // Find and print numbers not in Fibonacci
    while (count < n) {
        int isFib = 0;
        for (int i = 0; i < 100; i++) {
            if (num == fib[i]) {
                isFib = 1;
                break;
            }
        }

        if (!isFib) {
            printf("%d ", num);
            count++;
        }

        num++;
    }

    printf("\n");
}

int main() {
    int n;

    while (1) {
        printf("Enter the number of terms to print that are NOT in the Fibonacci series: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Exiting...\n");
            break;
        }

        no_fibonacci(n);
    }

    return 0;
}
