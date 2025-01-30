/*  Write a C program to calculate the factorial of a number 
    using a user-defined function.  */

  #include <stdio.h>
   int factorial(int n);

   int main() {
     int x;

     printf("Enter a Positive no : ");
     scanf("%d", &x);

       int result = factorial(x);
       printf("Factorial of %d is %d\n", x, result);
    return 0;
}
int factorial(int x) {
    
        int fact = 1;
        for(int i=1; i<=x; i++){
            fact *= i ;
        }
        return fact ;
    }