/* WAP to find Maximum and Second Maximum no from Array - */

#include<stdio.h>
int main (){

    int a;
    printf("Enter size of array - ");
    scanf("%d",&a);

    int arr[a];
    printf("Enter elements of array - ");
        for( int i=0; i<a; i++ ){
            scanf("%d",&arr[i]);
        }
    int max = arr[0]; 
        for( int i=0; i<a; i++ ){
            if( arr[i] > max  ){
                max = arr[i];
            }
        }
    int secmax = arr[0];
    for( int i=0; i<a; i++ ){
            if( arr[i] != max &&  arr [i] > secmax )            {
                secmax = arr[i];
            }
        }
    printf("Maximum is %d\n",max);
    printf("Second Max no is - %d ",secmax);
    return 0;
}