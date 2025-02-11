/* Write a simple program of Bubble sorting */

// Descending order -

#include<stdio.h>
int main (){

    int arr[7] = {12,13,14,15,16,17,18};

    printf("Before sorting - ");
        for(int i=0; i<7; i++ ){
            printf("%d ",arr[i]);
        }
    printf("\n\nAfter sorting - ");

    for(int i=0; i<7; i++ )
    {
        for(int j=0; j<7-i-1; j++ )
        {
            if(arr[j]<arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<7; i++ ){
            printf("%d ",arr[i]);
        }


    return 0;
}