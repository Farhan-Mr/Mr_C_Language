#include<stdio.h>
#include<stdlib.h>
int main (){

    int *ptr; 

    ptr = (int *)calloc(10,sizeof(int));

    printf("Elements - ");
        for(int i=0; i<10; i++){
            printf("%d  ",ptr[i]);
        }


    return 0;
}