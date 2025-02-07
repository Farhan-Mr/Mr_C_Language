/* WAP to sort your array using bubble sort method with the help of decleared function */

// Ascending order

#include<stdio.h>
    void _sort(int arr[],int x);

int main (){

    int a;
    printf("Enter size of array : ");
    scanf("%d",&a);

    int arr[a];
    printf("Enter elements of array : ");
        for(int i=0; i<a; i++){
            scanf("%d",&arr[i]);
        }
        printf("Before Sorted : ");
         for(int i=0; i<a; i++)
         {
            printf("%d ",arr[i]);
        }
        // Function Calling -
           _sort(arr,a);

    return 0;
}
    void _sort(int arr[], int a)
    {
        // Bubble Sort Method - Ascending order 
        for(int i=0; i<a-1; i++)
        {
            for(int j=0; j<a-i; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                      arr[j] = arr[j+1];
                    arr[j+1] = temp; 
                }
            }
        }
        // Print sorted array - 
        printf("\nAfter sorted : ");
        for(int i=0; i<a; i++)
        {
            printf("%d ",arr[i]);
        }
    }