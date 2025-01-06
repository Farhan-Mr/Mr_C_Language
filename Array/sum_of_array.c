/* WAP to make an array and enter its elements then find sum of array - */

#include<stdio.h>
int main (){

    int a;
    printf("\nEnter size of array: ");
    scanf("%d", &a);
    int arr[a];
    
    printf("Enter the elements of array - ");
    for( int i = 0; i<a; i++ )
    {
        scanf("%d", &arr[i]);
    }
    printf("\nGiven elements inside the array is - ");
    for(int i=0; i<a; i++)
    {
        printf("%d  ",arr[i]);
    }
    int sum = 0;
    for(int i=0; i<a; i++){
        sum += arr[i];
    }
    printf("\nSum of given array is - %d", sum);
    printf("\nThanku");

    return 0;
}