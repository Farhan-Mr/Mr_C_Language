/* WAP to give a example of function with argument and without return value */

#include<stdio.h>

void table(int i);

int main (){

    int t;
    printf("Enter number for find table - ");
    scanf("%d",&t);

    table(t);

    return 0 ;
}
void table(int t){

    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n",t,i,i*t);
    }
}