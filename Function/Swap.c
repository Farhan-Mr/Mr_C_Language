/* Swaping two number */

#include<stdio.h>

    void swap ( int x , int y ){

        int temp = x;
            x = y;
            y = temp; 
    printf("\nValue of a is %d ",x);
    printf("\nValue of b is %d ",y);
    return ;
    
    }
int main (){

    int a,b;
    printf("Enter a -- ");
    scanf("%d",&a);
    printf("Enter b -- ");
    scanf("%d",&b);

    swap(a,b);
    return 0;
}    