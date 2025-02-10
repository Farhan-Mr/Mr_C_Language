/* WAP to enter a number and find its factorial using recursive function */

#include<stdio.h>

  long long factorial(int a);         // Decleared Function 

int main (){

    int a;
    printf("Enter number to find its factorial :");
    scanf("%d",&a);

    // Use conditional statement - 
    if(a == 0 || a == 1 ){
        printf("Factorial is %d is 1",a);
    }

    // Function calling ot find factorial -- 

    long long fact = factorial(a);
    printf("The factorial of %d is %lld\n", a, fact);
    return 0;
}

long long factorial(int a){

    // Recursive Method 
    if(a==0)
    {
        return 1;
    }
    else
    {
        return a * factorial (a - 1); 
    }
}