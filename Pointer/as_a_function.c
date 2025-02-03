#include<stdio.h>
int main (){

    int arr[5] = { 4,44,7,77,786 };
    int *ptr;

    ptr = arr; 

    printf("\nAccess ptr Value \n");
    for ( int i =0; i<5; i++ )
    {
        // Access ptr value 
       
        printf("%d ",*ptr);  
        *ptr++;      
    }
    printf("\nAccess ptr Address\n");
    for ( int i =0; i<5; i++ )
    {
        // Access ptr Address 
        printf("%p ",ptr); 
        ptr++;       
    }

    return 0;
}