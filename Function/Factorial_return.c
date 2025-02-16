/* WAP to enter a number and find its factorial by using function */

#include<stdio.h>

long long factorial(int f);

int main(){

    int x; 
    printf("Enter a positive number to find factorial : ");
    scanf("%d",&x);

    // function calling -
    if(x>1)
    {
        printf("Factorial is : %lld",factorial(x));
    }
    else
    {
        printf("Invalid number got ");
    }
    return 0;
}

long long factorial(int f){

    long long int a = 1;
    for(int i=1; i<=f; i++)
    {
        a *= i;
    }
    return a;
}