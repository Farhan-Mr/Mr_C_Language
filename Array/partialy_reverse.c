/* WAP to reverse some part of array - */
// with the help of another array 

#include<stdio.h>
int main (){

int a; 
printf("Enter size of array - ");
scanf("%d",&a);
int arr[a];
int brr[a];         // use - reverse and store 
printf("Enter elements for array -\n");
    for(int i=0; i<a; i++ ){
        scanf("%d",&arr[i]);
    }

    printf("Before reverse -");
    for(int i=0; i<a; i++ ){
        printf("%d  ",arr[i]);
    }
    printf("\nAfter reverse -");
        for(int i=0; i<a; i++ ){

            brr[i] = arr[a-i-1];
            printf("%d  ",brr[i]);
        }


return 0;
}