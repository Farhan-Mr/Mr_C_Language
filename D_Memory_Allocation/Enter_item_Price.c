#include<stdio.h>
#include<stdlib.h>

int main (){

float *ptr;
    ptr = (float *)malloc(5*sizeof(float));


printf("Enter Price of 5 Items - \n");
    for( int i=0; i<5; i++ ){
        scanf("%f",&ptr[i]);
    }

printf("\nPrice of 5 items are - ");
    for( int i=0; i<5; i++ ){
        printf("%.2f ",ptr[i]);
    }
// With gst 
printf("\nPrice of 5 items with gst. - ");
    for( int i=0; i<5; i++ ){
        printf("%.2f ",ptr[i] + (ptr[i]*0.18));
    }


    return 0;
}
