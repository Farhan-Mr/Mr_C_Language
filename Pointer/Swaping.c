/* Example of Call by Referance */

#include<stdio.h>
    void swap( int *a, int *b ){

        int temp = 0; 
        temp = *a;
        *a = *b;
        *b = temp;

        printf("Afte swaping Value of A = %d and B = %d \n",*a,*b);
    }
int main (){

    int x,y;
    printf("Enter x - ");
    scanf("%d",&x);
    printf("Enter y - ");
    scanf("%d",&y);

    swap( &x,&y);

    printf("Value of X = %d and Y = %d /n",x,y);
    return 0;
}