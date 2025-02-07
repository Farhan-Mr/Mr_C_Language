/* WAP to enter elements of array and reverse it with the help of decleared function */

#include<stdio.h>

    void reverse(int arr[], int x);

int main ()
{   
    int a;
    printf("Enter size of array - ");
    scanf("%d",&a);
    
    int arr[a];
    printf("Enter elements of array : ");
        for(int i=0; i<a; i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("Given elements are : ");
        for(int i=0; i<a; i++)
        {
            printf("%d ",arr[i]);
        }
                                    // Function calling -
        reverse(arr,a);
    return 0;
}
    // Decleared Function -
    void reverse(int arr[], int a){
        int brr[a];
        // Reverse 
        for(int i=0; i<a; i++){
            brr[i] = arr[a-i-1];
        }

        printf("\n\nReversed array : ");
     for(int i=0; i<a; i++){
         printf("%d ",brr[i]);
     }   


    }