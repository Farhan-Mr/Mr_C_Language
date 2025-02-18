/* Function with argument and with return value */

#include<stdio.h>

int Add(int a , int b);     // Decleration   (int a , int b) --> this is called Parameter 

int main (){               // main Function 

    int a,b;
    printf("Enter 1st no. :- ");
    scanf("%d",&a);

    printf("Enter 2nd no. :- ");
    scanf("%d",&b);

    int sum = Add(a,b);                                 // Add(a,b) --> this is called Argument 
    printf("Addition of both no. is %d ",sum);

    return 0;
}
int Add(int x, int y)
{
    return x+y ;
}