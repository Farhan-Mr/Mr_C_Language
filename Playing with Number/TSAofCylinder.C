/* WAP to find Total Surface area of Cylinder */

#include<stdio.h>
int main (){

// Total Surface Area of Cylinder - 2πr(r + h)

float Pie, r, h, area;

printf("Enter the value of Pie : ");
scanf("%f",&Pie);

printf("Enter the value of r : ");
scanf("%f",&r);

printf("Enter the value of h : ");
scanf("%f",&h);

area = 2* Pie* r*(r + h);
printf("Total Surface Area of Cylinder : %.2f",area);

    return 0;
}