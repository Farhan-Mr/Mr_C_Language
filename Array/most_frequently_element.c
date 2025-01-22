/* WAP to find the most frequently number inside the array - */

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

    printf("Given array is : ");
    for(int i=0; i<a; i++){
        printf("%d  ",arr[i]);
    }
    // Finding Element 
    int max_count = 0;
    int max_element = 0;
    for(int i=0; i<a; i++)
    {
        int count = 0;
        for(int j=0; j<a; j++)
        {
            if(arr[i]==arr[j])
            {
                count ++ ;
            }
        }
        if(count>max_count)
        {
            max_count = count;
            max_element = arr[i];
        }
    }
    printf("\nMost frequently elements is : %d ",max_element);

    return 0;
}