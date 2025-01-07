/* WAP to reverse some part of array - */ 

#include<stdio.h>
int main (){

int arr[7] = {7,8,6,5,4,3,2};

for(int i=1, j=4; i<=j; i++,j--){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

for(int i=0; i<7; i++){
    printf("%d ",arr[i]);
}


return 0;
}