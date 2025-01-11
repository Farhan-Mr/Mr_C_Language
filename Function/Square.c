// WAP to give a example of function with argument and with retuen value -

#include<stdio.h>

int square(int i);

int main (){

int a;
    printf("\nEnter no. : ");
    scanf("%d",&a);

    int sq = square(a);

     printf("Square is %d",sq);

    return 0;
}
int square(int a){

    int s = a*a;
    return s;
}