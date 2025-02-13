/* WAP to find area of circle */

#include<stdio.h>
int main (){

    // Area of circle = pie* r* r //

printf("Enter the value of r : ");
float r;
scanf("%f",&r);
int pie = 3.14;
float Area = pie* r* r;
printf("Area of circle : %.2f",Area);
    return 0;
}