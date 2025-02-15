/* WAP to count Given Digit */

#include<stdio.h>
int main (){

int i; 

printf("Enter Your Digits :- ");
scanf("%d",&i);

int count = 0;
while(i>0)
{
    i/=10;
    count++;
}
printf("Given digits is %d ",count);

    return 0;
}