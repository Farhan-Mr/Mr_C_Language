/* How to use Free Function - */

#include<stdio.h>
#include<stdlib.h>
    int main (){

            float *ptr ;
            ptr = (float *)calloc(10,sizeof(float));


            printf("Enter number - ");
            for(int i=0; i<10; i++){
                scanf("%f",&ptr[i]);
            }
            printf("\nGiven no are - ");
            for(int i=0; i<10; i++){
                printf("%.2f ",ptr[i]);
            }
        free(ptr);


        return 0;
    }