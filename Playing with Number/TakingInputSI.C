
/* WAP to find SI */

#include<stdio.h>
int main (){
printf("\n");

// Taking Input in your Programme 

float Principal, Rate, Time, Si;

printf("Enter Principal : ");
scanf("%f",&Principal);

printf("Enter Rate : ");
scanf("%f",&Rate);

printf("Enter Time : ");
scanf("%f",&Time);

Si = (Principal* Rate* Time)/100;

printf("Your Si is : %.2f",Si);
    return 0;
}

