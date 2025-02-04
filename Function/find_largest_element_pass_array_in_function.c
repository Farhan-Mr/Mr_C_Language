/* WAP to pass an array to decleared function and find largest element form given array */

#include<stdio.h>
    void max_element (int arr[], int a);

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
    max_element(arr,a); // function calling - 

    return 0;
}
void max_element (int arr[], int a)
{
    int max = arr[0];
    for(int i=0; i<a; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Largets element is %d ",max);
}  