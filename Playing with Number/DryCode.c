/* WAP to print from 0 to 10 and find its sum */

#include<stdio.h>
int main (){

int i;
int counti; 
for( i = 0 ; i<=10 ; i++ )
{
    printf("%d\n",i);
    counti +=  i ;
}


printf("\nSum is  = %d",counti);
}