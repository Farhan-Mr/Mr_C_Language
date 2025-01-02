/*WAP to find largest element in array - */
#include<stdio.h>
int main (){

int a; 
printf("Enter size of array - ");
scanf("%d",&a);
int arr[a];
printf("Enter elements for array -\n");
    for(int i=0; i<a; i++ ){
        scanf("%d",&arr[i]);
    }
printf("Given array is |");
    for(int i=0; i<a; i++ ){
        printf(" %d |",arr[i]);
    }
// find greatest no. in array -
    int max = arr[0] ;
    for(int i=0; i<a; i++ )
    {
        
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }    
printf("\nGreatest no is - %d",max);


    return 0;
}