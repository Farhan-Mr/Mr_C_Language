/* WAP to call function and find smallest element form given array */

#include<stdio.h>
     void min_element(int arr[], int a);

int main (){

    int a;
    printf("Enter size of array : ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter elements of array : ");
        for(int i=0; i<a; i++)
        {
            scanf("%d",&arr[i]);
        }
    min_element(arr,a);    

    return 0;
}
    
void min_element(int arr[], int a)
{
    printf("Given array is : ");
       for(int i=0; i<a; i++){
        printf("%d ",arr[i]);
       }
    // Smallest Element 
    
    int min = arr[0];
    for(int i=0; i<a; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
   printf("\nMinimum element is %d ",min);
 
}

