/* WAP to declear a sub function and call it from main function  */
// sub function give you difference of two number -

#include<stdio.h>
 
 void sub();

 int main (){

    sub();
    return 0;
}
void sub(){

int a,b;

    printf("\nEnter two number for find difference - \n");
    printf("Enter 1st number - ");
    scanf("%d",&a);
    printf("Enter 2nd number - ");
    scanf("%d",&b);

    int Subtraction ;

    printf("Difference of 1st number to 2nd number is -  %d",(a-b));
return ;
}