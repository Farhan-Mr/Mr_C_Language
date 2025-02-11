/* WAP to enter your age and check you are eligible for vote or not */

#include<stdio.h>
int main (){

    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    // Check -
    if(age >= 18){
        printf("\nEligible for vote \nYour age is %d",age);
    }
    else{
        printf("\nYou are not eligible for vote\nYour age is %d",age);
    }

    return 0;
}