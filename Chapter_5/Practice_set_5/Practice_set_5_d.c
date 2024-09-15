#include <stdio.h>

// Recursive function for finding the nth Fibonacci term
int fibonacci(int n) {
    if (n <= 1)
        return n; // Base case
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // General case
}

int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci series: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
