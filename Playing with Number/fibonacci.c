/*  Write a C program to find the nth Fibonacci number using recursion. */

#include <stdio.h>
    int fibonacci(int n);

int main() {
    int n;
    printf("Enter Positive no. : ");
    scanf("%d", &n);

        int result = fibonacci(n);
        printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}
int fibonacci(int n){
    if (n <= 1) {
        return n; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
    }
}