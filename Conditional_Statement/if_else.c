/* WAP to check you are eligible for vote or not */

#include<stdio.h>
 int main (){

    int age;
    printf("Enter your age : ");
        scanf("%d",&age);

        if(age>=18){
            printf("Your age is %d, You are Eligible for Voting.",age);
        }
        else{
            printf("Not Eligible for Voting.");
        }


 }