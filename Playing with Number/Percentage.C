/* WAP to find Percentage of 4 subject */

#include<stdio.h>
int main (){

printf("\n");

float maths, hindi, english, science;

 printf("Enter Maths marks out of 40 : ");
 scanf("%f",&maths);

 printf("Enter Hindi marks out of 40 : ");
 scanf("%f",&hindi);

 printf("Enter English Marks out of 40 : ");
 scanf("%f",&english);

 printf("Enter Science Marks out of 40 : ");
 scanf("%f",&science);

float Percentage = (maths + hindi + english + science)/160*100;

printf("Percentage is : %.2f",Percentage);

    return 0;
}