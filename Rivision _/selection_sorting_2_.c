/* WAP to sort the array in Decending order using selection sorting  */

#include<stdio.h>
int main()
{

 int arr[7] = { 73,20,4,45,14,17,102};
 int a = 7;

 printf("\nBefore sorting : ");
 for(int i=0; i<a; i++)
 {
     printf("%d ",arr[i]);
 }

 for(int i=0; i<a-1; i++)
 {
    int min = i ;
    for(int j=i+1; j<a; j++)
    {
        if(arr[min]<arr[j])
        {
            min = j ;
        }
    }
    int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
 }
 printf("\n\nAfter sorting - ");
 printf("Decending order : ");

 for(int i=0; i<a; i++)
 {
    printf("%d ",arr[i]);
 }


    return 0;
}