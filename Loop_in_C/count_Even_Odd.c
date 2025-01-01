#include<stdio.h>
int main (){

int i, n;
printf("Enter no. :- ");
scanf("%d",&n);

int count_e = 0 ;
int count_o = 0 ;
for( i=1; i<=n; i++ )
{
    if (i%2==0)
    {
        count_e ++ ;
    }
    else
    {
        count_o ++ ;
    }
}
    printf("There are %d Even no. From 1 to %d  ",count_e, n );
    
    printf("\nThere are %d Odd no. From 1 to %d  ",count_o, n );
    return 0;
}