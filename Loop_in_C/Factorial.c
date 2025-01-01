#include<stdio.h>
int main (){

int i, n, a;

printf("Enter your no. :- ");
scanf("%d",&n);

a=1;

for( i=1; i<=n; i++ )
{
    a=a*i; 
}
printf("Factorial of %d = %d", n, a);

    return 0;
}