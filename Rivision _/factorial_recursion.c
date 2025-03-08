/* WAP using recursion function find factorial */

#include<stdio.h>

long long factorial(int a);

int main ()
{

    int a; 
    printf("Enter a number ");
    scanf("%d",&a);

    if( a==0 || a==1 )
    {
        printf("Factorial is 1 ");
    }
    else
    {
        long long fact = factorial(a);
        printf("Factorial of %d is %lld",a,fact);
    }

    return 0;
}
long long factorial(int a)
{
    if(a == 0)
    {
        return 1;
    }
    else
    {
        return a*factorial(a-1);
    }
}
