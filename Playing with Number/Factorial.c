/* WAP to find Factorial */

#include<stdio.h>
int main (){

int i,n;
int a=1;

printf("Enter no -- ");
scanf("%d",&n);

    for( i=1; i<=n;i++ )
    {
        a=a*i;
        //printf("%d  ",a);
    }
    printf("Factorial is %d ",a);


    return 0; 
}