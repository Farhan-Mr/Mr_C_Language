#include<stdio.h>

void add();                  // function declear 

int main (){

    printf("\nwelcome here - \n");
    add();                  // function calling 

    return 0;
}
void add(){                 // function definition 

    int a,b;
    printf("Enter 1st number - ");
    scanf("%d",&a);
    printf("Enter 2nd number - ");
    scanf("%d",&b);

    int Addition;

    printf("Sum of two number is %d",a+b);

}