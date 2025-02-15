// WAP which one is Greater - 

#include <stdio.h>
int main (){
int a, b;

printf("Enter 1st no. :-  ");
scanf("%d",&a);
printf("Enter 2nd no. :- ");
scanf("%d",&b);

if(a>b)
{
    printf("%d is greater than %d ",a,b);
}
else
{
    printf("%d is less than %d ",a,b);
}
    return 0;
}