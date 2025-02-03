#include<stdio.h>
int main (){


    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    ptr += 2; // Now ptr points to arr[2]

    printf("%d ",arr[2]);


    return 0;
}