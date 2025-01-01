/* How to Print Table of 12 */
#include <stdio.h>
int main (){

/*
int i , num ;
num = 12 ;
for(i = 1 ; i <= 10 ; i++ )
{
    printf("%d\n",i*num);
}
*/

printf("\n");

// Take Input from User 

int i , n;

printf("Enter your Table no. :- ");
scanf("%d",&n);

for(i = 1 ; i <= 10 ; i++ )
{
    printf("%d * %d = %d \n", n, i, i*n);
}

    return 0;
}