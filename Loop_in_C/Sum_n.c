#include<stdio.h>
int main (){

int i, n;
printf("Enter no. :- ");
scanf("%d",&n);

int a = 0; 

for( i=1; i<=n; i++ )
{
    a=a+i;
}
printf("Sum is :- %d ",a);

    return 0;
}