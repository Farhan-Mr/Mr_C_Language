/* WAP to create a array and print it also find sum of its element */

#include<stdio.h>
int main (){

    int a;
    printf("\nEnter size of array : ");
    scanf("%d",&a);

    int arr[a];
    printf("\nEnter array elements : ");
    for(int i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nGiven array is : \n");

    int sum = 0;
    for(int i=0; i<a; i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0; i<a; i++)
    {
        sum += arr[i];
    }
    
    printf("\nSum of array is %d",sum);

    return 0;
}