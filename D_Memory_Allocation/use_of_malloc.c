#include<stdio.h>
#include<stdlib.h>

int main (){

int *ptr;
    ptr = (int *)malloc(5*sizeof(int));

// Method 1 - 
    // ptr[0] = 20;
    // ptr[1] = 22;
    // ptr[2] = 40;
    // ptr[3] = 44;
    // ptr[4] = 47;

// Method 2 - 
printf("Enter no. - ");
    for( int i=0; i<5; i++ ){
        scanf("%d",&ptr[i]);
    }
    
    for( int i=0; i<5; i++ ){
        printf("%d ",ptr[i]);
    }

    return 0;
}