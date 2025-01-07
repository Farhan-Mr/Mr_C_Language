/*WAP to enter elements of array and search any one number from given array - */

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

    printf("Given array is -");
    for(int i=0; i<a; i++ ){
        printf("%d  ",arr[i]);
    }
    int num;
    printf("\nEnter number that you search in array - ");
    scanf("%d",&num);

    for( int i=0; i<a; i++ )
    {
        if(num==arr[i])
        {
            printf("Number %d is present at index %d",num,i);
            break;
        }
    }


return 0;
}