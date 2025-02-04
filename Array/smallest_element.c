/* WAP to find smallest elemet inside the array */

#include<stdio.h>
    int main (){

        int a;
        printf("Enter the size of array : ");
        scanf("%d",&a);

        int arr[a];
        printf("Enter elements of array : ");
            for(int i=0; i<a; i++){
                scanf("%d",&arr[i]);
            }
        printf("Given array is : ");
            for(int i=0; i<a; i++){
                printf("%d  ",arr[i]);
            }
         int min = arr[0]; 
         for(int i=0; i<a; i++)
         {
            if(min > arr[i])
            {
                min = arr[i];
            }
         }
         printf("\nSmallest element is %d ",min);

        return 0;
    }