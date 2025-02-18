/* WAP to create a Add and Subtract function */

#include<stdio.h>

int add(int x,int y);
int sub(int x,int y);

int main (){

    int a,b;
    printf("Enter 1st no. : ");
    scanf("%d",&a);
    printf("Enter 2nd no. : ");
    scanf("%d",&b);

    int sum = add(a,b);
    printf("Sum is %d\n",sum);


    int m,n;
    printf("Enter 1st no. : ");
    scanf("%d",&m);
    printf("Enter 2nd no. : ");
    scanf("%d",&n);

    int su = sub(m,n);
    printf("Subtract is %d\n",su);
    

    return 0;
}
int add(int x,int y)
{
    return x+y ;
}
int sub(int x, int y)
{
    return x-y ;
}