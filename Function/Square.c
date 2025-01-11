// WAP to give a example of function with argument and with retuen value -

#include<stdio.h>

int square(int i);          // function decler 

int main (){

int a;
    printf("\nEnter no. : ");
    scanf("%d",&a);

    int sq = square(a);             // function calling 

     printf("Square is %d",sq);

    return 0;
}
int square(int a){              // function definition 

    int s = a*a;
    return s;
}