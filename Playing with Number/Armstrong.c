/* WAP to enter a number and check it is Armstrong number or not - */

#include<stdio.h>
int main (){

    int a; 
    printf("Enter number : ");
    scanf("%d",&a);

int a_cpy = a;
int reminder = 0;
int cube, sum = 0;

    // Check Armstrong or not - 
    do
    {
       reminder = a % 10;
       cube = reminder*reminder*reminder;
       sum += cube;
       a = a/10; 
    } while (a>0);
    
    if(sum==a_cpy)
            printf("\n%d is Aramstrong number    -> \t %d == %d",sum,sum,a_cpy);
            else
            printf("\n%d is not Aramstrong number    -> \t %d == %d",sum,sum,a_cpy);

        

    return 0;
}