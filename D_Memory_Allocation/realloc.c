#include<stdio.h>
#include<stdlib.h>
int main (){

    int *ptr;
        ptr = (int *)calloc(5,sizeof(int));

        printf("Enter first 5 odd no. - ");
            for(int i=0; i<5; i++){
                scanf("%d",&ptr[i]);
            }
        printf("\n1 st 5 odd no. is - ");
            for(int i=0; i<5; i++){
                printf("%d ",ptr[i]);
            }
        ptr = realloc(ptr,6);

        ptr[0] = 2;
        ptr[1] = 4;
        ptr[2] = 6;
        ptr[3] = 8;
        ptr[4] = 10;
        ptr[5] = 12;
        printf("\n1 st 6 Even no is - ");
        for(int i=0; i<5; i++){
                printf("%d ",ptr[i]);
            }


    return 0;
}