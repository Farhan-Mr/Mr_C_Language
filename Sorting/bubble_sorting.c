#include<stdio.h>
int main (){

int a; 
printf("Enter size of array : ");
scanf("%d",&a);

int arr[a];
printf("Enter elements of array : ");
    for(int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }

    printf("Before sorting : ");
    for(int i=0; i<a; i++){
        printf("%d ",arr[i]);
    }

    printf("\nAfter sorting : ");
        for(int i=0; i<a-1; i++)
        {
            for(int j=0; j<a-i-1; j++)
            {
                if(arr[j]>arr[j+1])
                {

                int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    for(int i=0; i<a; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}