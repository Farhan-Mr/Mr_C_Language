/* WAP to pass an araay to declear function and find sum of array */

#include<stdio.h>
    void sum_array(int arr[] , int a);
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
        sum_array(arr,a);

    return 0;
}
 void sum_array(int arr[] , int a){
    int sum = 0;
    for(int i=0; i<a; i++)
    {
        sum += arr[i];
    }
    printf("Sum of array is %d ",sum);
    
}