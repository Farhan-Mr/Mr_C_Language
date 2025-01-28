/*  Write a C program to check whether a given number is positive, negative, or zero 
    using conditional statements. Debug and execute the program. */

    #include<stdio.h>
    int main (){

        int a;
        printf("Enter number : ");
        scanf("%d",&a);

        if(a>=1){
            printf("%d is Positive number ",a);
        }
        else if (a==0){
            printf("%d is Not Positive and Nor negative number",a);
        }
        else{
            printf("%d is Negative number ",a);
        }

        return 0;
    }

