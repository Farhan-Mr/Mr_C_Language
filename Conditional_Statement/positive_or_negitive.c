/* WAP to Find the no is positive or negative and whether than it is o */

#include<stdio.h>
int main (){

int x;
printf("Enter your no. : ");
scanf("%d",&x);

if (x > 0)
{
    printf("It's Positive no. \n");
    printf("It is also Natural no.\n");
}
else if (x == 0)
{
    printf("x is equal to 0 ");
    printf("\nx=0\n");
    printf("This is not positive and nor negative no.");
}
else
{
    printf("It's a Negative no.\n");
    printf("It is also called Integer no.\n");
}
    return 0;
}