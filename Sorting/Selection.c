/* Wap to enter a array and sort it  (Selection sorting)  */

#include<stdio.h>
int main (){

int arr[7] = {73,20,4,45,1,14,17};
int n=7;
    for (int i=0; i<n-1; i++)
    {
        int min = i;
        for(int j=i+1; j<n;j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;
               // printf("\n%d ",min);
            }
        }
         int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("\nSorted array is - ");
    for(int i=0; i<7; i++){
        printf("%d  ",arr[i]);
    }

    return 0;
}