/*  Write a C program to take a user's name and age as 
    input and display them using ‘printf’ and ‘scanf’ functions.*/

    #include<stdio.h>
    int main (){

        char name[20];
        int age;

     printf("Enter your name: ");
     scanf("%s",name);

     printf("Enter your age: ");
     scanf("%d",&age);

     // Display Name and Age --
     printf("\nName: %s\n", name);
     printf("Age: %d\n", age);

        return 0;
    }